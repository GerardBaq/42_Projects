/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:57:00 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		++i;
	}
	dest[destlen + i] = '\0';
	if (size <= destlen)
		return (srclen + size);
	else
		return (srclen + destlen);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	const char	src[] = " and Peepo";
	char    dest[100] = "Baldy";
	char    dest2[100] = "Baldy";

	printf("scr has length %d\n", ft_strlcat(dest, src, 14));
	printf("%s\n", dest);
	printf("scr has length %lu\n", strlcat(dest2, src, 14));
	printf("%s\n", dest2);
}
*/