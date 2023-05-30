/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:41 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	s2 = malloc(len * sizeof(char) + 1);
	if (!s2)
		return (0);
	while (s[i] && i < len)
	{
		s2[i] = f(i, s[i]);
		++i;
	}
	s2[i] = '\0';
	return (s2);
}
