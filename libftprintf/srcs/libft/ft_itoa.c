/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:11:08 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
//#include <stdio.h>

static int	count_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits = 1;
	while (n)
	{
		++digits;
		n /= 10;
	}
	return (digits);
}

static char	*fill_str(size_t digits, int n, char *str)
{
	size_t			i;
	unsigned int	num;
	size_t			is_neg;

	is_neg = 0;
	if (n < 0)
		num = (unsigned int) - n;
	else
		num = (unsigned int) n;
	i = digits;
	if (n < 0)
		is_neg = 1;
	while (i > is_neg)
	{
		--i;
		str[i] = (num % 10 + '0');
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	str[digits] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t			digits;
	char			*str;

	digits = count_digits(n);
	str = malloc(digits * sizeof(char) + 1);
	if (!str)
		return (0);
	if (n == 0)
	{
		str[0] = '0';
		str[digits] = '\0';
	}	
	else
		str = fill_str(digits, n, str);
	return (str);
}
/*
int main(void)
{
	int	n = 0;
	char *str = ft_itoa(n);

	printf("the int %d becomes the string:\n%s\n", n, str);
}
*/