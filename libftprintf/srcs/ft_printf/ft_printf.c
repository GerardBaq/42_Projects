/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:05:49 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

static int	type_check(char c, va_list *args, int *len)
{
	if (c == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr_len(va_arg(*args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr_len(va_arg(*args, int), len);
	else if (c == 'u')
		ft_putunbr_len(va_arg(*args, unsigned int), len);
	else if (c == 'X')
		ft_puthex_len(va_arg(*args, int), len, 'X');
	else if (c == 'x')
		ft_puthex_len(va_arg(*args, int), len, 'x');
	else if (c == 'p')
		ft_putpointer_len(va_arg(*args, unsigned long), len);
	if (c == '%')
		ft_putchar_len('%', len);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] && len != -1)
	{
		if (str[i] == '%')
		{
			i++;
			type_check(str[i], &args, &len);
			i++;
		}
		else
		{
			ft_putchar_len(str[i], &len);
			i++;
		}
		va_end (args);
	}
	return (len);
}
/* 	
Test for 
c (char)
s (string)
i (integer)
d (decimal)
u (unsigned)
X (Hexadecimal CAPS)
x (hexadecimal lowerc)
p (pointer)
% (% sign)


#include <stdio.h>

int main()
{
	char	c = 'o';
	char	*str = "Peepo goes shopping";
	int 	num = -42;
	unsigned int	unum = 2882343476;
	
	ft_printf("--------------------------------------------\n");	
	ft_printf("Test for %%c\t-->\t%c\n", c);
	printf("OG for %%c\t-->\t%c\n", c);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%s\t-->\t%s\n", str);
	printf("OG for %%s\t-->\t%s\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%i\t-->\t%i\n", num);
	printf("OG for %%i\t-->\t%i\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%d\t-->\t%d\n", num);
	printf("OG for %%d\t-->\t%d\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%u\t-->\t%u\n", unum);
	printf("OG for %%u\t-->\t%u\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%X\t-->\t%X\n", unum);
	printf("OG for %%X\t-->\t%X\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%x\t-->\t%x\n", unum);
	printf("OG for %%x\t-->\t%x\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%p\t-->\t%p\n", str);
	printf("OG for %%p\t-->\t%p\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for all %%\n\n%c\n%s\n%i\n%d\n%u\n%X\n%x\n%p\n", c, str, 
	num, num, unum, unum, unum, str);
	ft_printf("--------------------------------------------\n");
}
*/
