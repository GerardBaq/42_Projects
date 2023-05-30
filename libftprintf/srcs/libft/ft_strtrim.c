/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:33:52 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
/*
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (0);
	i = 0;
	if ((start > len && start > ft_strlen(s)) || len == 0)
	{
		ft_bzero(subs, 1);
		return (subs);
	}
	while (s[start + i] && i < len)
	{
		subs [i] = s[start + i];
		++i;
	}
	subs[i] = '\0';
	return (subs);
}

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
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*s2;

	s2 = 0;
	if (*s1 == '\0' || *set == '\0')
		return (ft_strdup(s1));
	if (s1 != 0 && set != 0)
	{
		start = 0;
		len = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			++start;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > start)
		{
			--len;
		}
		s2 = ft_substr(s1, start, len - start);
		if (!s2)
			return (0);
	}
	return (s2);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	const char	s1[] = "++--**+*+*+*Balden* and *Peepo-****+-+****+-";
	char    set[] = "+-*";


	printf("%s\n", ft_strtrim(s1, set));
}
*/