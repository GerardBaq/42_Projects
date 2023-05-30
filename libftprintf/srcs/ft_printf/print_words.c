/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:50:35 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_putchar_len(char c, int *len)
{
	if (write(1, &c, 1) == -1)
		*len = -1;
	else
		*len += 1;
	return (*len);
}

void	ft_putstr_len(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
		args = "(null)";
	while (args[i] && *len != -1)
	{
		if (ft_putchar_len(args[i], len) == -1)
			*len = -1;
		++i;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "Hello que tal?";
	size_t	len;

	len = 0;
//	ft_putchar_len('0', &len);
//	ft_putstr_len(str, &len);
	printf(" NULL %s NULL ", NULL);
}
*/