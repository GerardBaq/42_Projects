/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:29:12 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*udest;
	unsigned char	*usrc;

	udest = (unsigned char *)dest;
	usrc = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		udest[i] = usrc[i];
		++i;
	}
	return (dest);
}
/*
#include <unistd.h>

int main(void)
{
	char	dest[] = "Baldy goes shopping";
	const char    src[] = "Peepo goes surveying";

	ft_memcpy(dest, src, 5);
	write (1, dest, 19);
}
*/