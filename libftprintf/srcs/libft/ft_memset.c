/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:06:50 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		++i;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char    dest[100] = "Baldy";
	char    dest2[100] = "Baldy";

	printf("scr has length %s\n", ft_memset(dest, 48, 14));
	printf("scr has length %s\n", memset(dest2, 48, 14));
}
*/