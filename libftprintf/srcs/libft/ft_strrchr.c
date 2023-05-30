/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:08:38 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (c > 256)
		c %= 256;
	if (c == 0)
		return ((char *)&s[i + 1]);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char  *s = "teste";
	const char  *s2 = "teste";
	char    c = 'x';
	char	*str;

	printf("%s\n", ft_strrchr(s, c));
	if (!(str = ft_strrchr(s, 'x')))
			printf("NULL my funct");
	else
		printf("IT IS FOUND my funct");
	printf("\n");
	printf("%s\n", strrchr(s2, c));
	if (!(str = strrchr(s2, 'x')))
			printf("NULL lib");
	else
		printf("IT IS FOUND lib");
}
*/