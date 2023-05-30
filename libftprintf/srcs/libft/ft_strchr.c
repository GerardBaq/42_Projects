/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:08:38 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		++i;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	const char  *s = "bonjour";
	char    c = 's';
	char	*str;

	printf("%s\n", ft_strchr(s, c));
	if (!(str = ft_strchr(s, 's')))
			printf("NULL");
	else
		printf("NOPE");
}
*/