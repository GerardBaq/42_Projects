/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:13:56 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	int				value;

	sign = 1;
	i = 0;
	value = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += (str[i] - '0');
		++i;
	}
	return (value * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "   \t -12345ds21a";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
*/