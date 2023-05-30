/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:08:40 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udest;
	unsigned char	*usrc;

	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	else if (udest < usrc)
	{
		while (i < n)
		{
			udest[i] = usrc[i];
			++i;
		}
	}
	else
	{
		while (n--)
			udest[n] = usrc[n];
	}
	return (dest);
}
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*udest;
	const unsigned char	*usrc;
	char				*tdest;
	char				*tsrc;

	udest = (unsigned char *)dest;
	usrc = (unsigned char *) src;
	tdest = (char *) (dest + n - 1);
	tsrc = (char *) (src + n - 1);
	while (n--)
	{
		*tdest = *tsrc;     
		--tdest;
		--tsrc;
	}
	return (dest);
}
*/
/*
#include <string.h>
#include <unistd.h>

int main(void)
{
	char	dest[] = "Baldy goes shopping";
	char    src[] = "Peepolikesurveying";
	char    src2[] = "Peepolikesurveying";

	ft_memmove(src, src+2, 8);
	write (1, src, 18);
	write (1, "\n", 1);
	memmove(src2, src2+2, 8);
	write (1, src2, 18);
}
*/