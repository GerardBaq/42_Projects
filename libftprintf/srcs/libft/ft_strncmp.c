/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:39:26 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while ((us1[i] || us2[i]) && (i < n))
	{
		if (us1[i] == us2[i])
			++i;
		else
			return (us1[i] - us2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "test\0";
	char	s2[] = "test\200";
	
	printf("%d\n", ft_strncmp(s1, s2, 13));
}
*/