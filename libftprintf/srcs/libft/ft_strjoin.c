/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:43:08 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc((len) * sizeof(char) + 1);
	if (!s3)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		++i;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		s3 [i + j] = s2[j];
		++j;
	}
	s3[i + j] = '\0';
	return (s3);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	const char	src[] = "\0";
	char    dest[] = "Peepo";

	printf("The new string is: %s\n", ft_strjoin(dest, src));
}
*/