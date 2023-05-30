/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 08:43:37 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
/*
void ft_putchar_len(char c, size_t *len)
{
	write(1, &c, 1);
	*len += 1;
}

void ft_putstr_len(char *args, size_t *len)
{
	size_t	i;

	i = 0;
	while (args[i])
	{
		ft_putchar_len(args[i], len);
		++i;
	}
}
*/
void	ft_putnbr_len(int n, int *len)
{
	unsigned int	num;

	if (n < 0 && *len != -1)
	{
		num = (unsigned int) -n;
		if (ft_putchar_len('-', len) == -1)
			*len = -1;
	}
	else
		num = (unsigned int) n;
	if (num >= 10 && *len != -1)
	{
		ft_putnbr_len(num / 10, len);
	}
	if (*len != -1 && ft_putchar_len((num % 10) + '0', len) == -1)
		*len = -1;
}

void	ft_putunbr_len(int unsigned n, int *len)
{
	if (n >= 10 && *len != -1)
	{
		ft_putnbr_len(n / 10, len);
	}
	if (*len != -1 && ft_putchar_len((n % 10) + '0', len) == -1)
		*len = -1;
}

void	ft_puthex_len(int n, int *len, char c)
{
	unsigned int	num;
	char			*uhex;
	char			*lhex;

	uhex = "0123456789ABCDEF";
	lhex = "0123456789abcdef";
	num = (unsigned int) n;
	if (num >= 16 && *len != -1)
	{
		ft_puthex_len(num / 16, len, c);
	}
	if (c == 'x')
	{
		if (*len != -1 && ft_putchar_len(lhex[num % 16], len) == -1)
			*len = -1;
	}
	else
	{
		if (*len != -1 && ft_putchar_len(uhex[num % 16], len) == -1)
			*len = -1;
	}
}

static void	print_pointer(unsigned long pointer, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (pointer >= 16 && *len != -1)
		print_pointer(pointer / 16, len);
	if (*len != -1 && ft_putchar_len(hex[pointer % 16], len) == -1)
		*len = -1;
}

void	ft_putpointer_len(unsigned long pointer, int *len)
{
	ft_putstr_len("0x", len);
	if (*len != -1)
		print_pointer(pointer, len);
}
/*
#include <stdio.h>

int main(void)
{
	int		n;
	size_t	len; 
	char b = 32;
	char q = 45;
	char *mmo;

	mmo = malloc(2);
	mmo[0] = 'a';
	mmo[1] = '\0';

	len = 0;
	n = -342;
	
	printf("\n-----------------------\n");
	printf("My printf d/i prints: \n");
	ft_putnbr_len(n, &len);
	printf("\nOG printf d/i prints: \n%d", n);
	printf("\n-----------------------\n");
	printf("My printf u prints: \n");
	ft_putunbr_len(n, &len);
	printf("\nOG printf u prints: \n%u", n);
	printf("\n-----------------------\n");
	printf("My printf x prints: \n");
	ft_puthex_len(n, &len, 'x');
	printf("\nOG printf x prints: \n%x", n);
	printf("\n-----------------------\n");
	printf("My printf X prints: \n");
	ft_puthex_len(n, &len, 'X');
	printf("\nOG printf X prints: \n%X", n);
	printf("\n-----------------------\n");
	printf("My printf p prints: \n");
	ft_putpointer_len(&n, &len);
	printf("\nOG printf p prints: \n%p", &n);
	printf("\n-----------------------\n");
	printf("len is %zu", len);
	printf("\n-----------------------\n");
	
	printf("My printf p prints: \n");
	ft_putpointer_len(&mmo, &len);
	printf("\nOG printf p prints: \n%p\n", &mmo);
	printf("My printf p prints: \n");
	ft_putpointer_len(&b, &len);
	printf("\nOG printf p prints: \n%p\n", &b);
	printf("My printf p prints: \n");
	ft_putpointer_len(&q, &len);
	printf("\nOG printf p prints: \n%p\n", &q);
	printf("My printf p prints: \n");
	ft_putpointer_len(&n, &len);
	printf("\nOG printf p prints: \n%p\n", &n);
	
}
*/