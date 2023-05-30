/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:56:09 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!s2[i])
		return (s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			++j;
			if (s2[j] == '\0')
				return (&s1[i]);
		}
		++i;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Helqlo que tal";
	char	s2[] = "que";
	
	printf("%s\n", ft_strnstr(s1, s2, 14));
	printf("%s\n", strnstr(s1, s2, 14));
}
*/