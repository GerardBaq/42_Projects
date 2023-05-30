/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:54:54 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_strlcpy(char *dest, const char *scr, size_t size)
{
	size_t	scrlen;
	size_t	i;

	scrlen = ft_strlen(scr);
	i = 0;
	if (size != 0)
	{
		while (scr[i] && (i + 1) < size)
		{
			dest[i] = scr[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (scrlen);
}
/*
#include <stdio.h>

int main(void)
{
	char    *dest;
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	printf("%d\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("%s", dest);
}
*/