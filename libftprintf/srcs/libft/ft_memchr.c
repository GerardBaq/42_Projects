/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:28:02 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*haystack;
	unsigned char	needle;

	haystack = (unsigned char *)s;
	needle = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (haystack[i] == needle)
			return (haystack + i);
		++i;
	}
	return (0);
}
/*
#include <unistd.h>
#include <string.h>

int main(void)
{
	const char  s[20] = "Hello que talio boy";
	const char  s2[20] = "Hello que talio boy";
	char    c = 'o';

	write(1, ft_memchr(s, c, 19), 15);
	write(1, "\n", 1);
	write(1, memchr(s2, c, 19), 15);
	write(1, "\n", 1);
}
*/