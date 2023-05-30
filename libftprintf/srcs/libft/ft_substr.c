/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:59:24 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if ((start >= ft_strlen(s)) || len == 0)
		return (ft_strdup(""));
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		subs [i] = s[start + i];
		++i;
	}
	subs[i] = '\0';
	return (subs);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Peepo goes shopping";
	
	printf("%s\n", ft_substr(s1, 6, 13));
//	printf("%s\n", substr(s1, 6, 13));
}
*/