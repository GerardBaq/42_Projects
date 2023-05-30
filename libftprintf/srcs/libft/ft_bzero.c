/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaquero <gbaquero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:28:17 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/03 12:28:17 by gbaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"


void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		++i;
	}
}
/*
#include <strings.h>
#include <unistd.h>

int main(void)
{
	char    dest[100] = "";
	char    dest2[100] = "";

	write(1, dest, 6);
	write(1, "\n", 1);
	ft_bzero(dest, 6);
	write(1, dest, 6);
	write(1, "\n", 1);
	write(1, dest2, 6);
	write(1, "\n", 1);
	bzero(dest2, 6),
	write(1, dest2, 6);
	write(1, "\n", 1);
}
*/