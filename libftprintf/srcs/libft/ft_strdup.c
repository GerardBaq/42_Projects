/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:43:23 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
/*
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
*/
char	*ft_strdup(const char *s)
{
	char		*s2;
	size_t		i;

	i = 0;
	s2 = malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (!s2)
		return (0);
	else
	{
		while (i < ft_strlen(s))
		{
			s2[i] = s[i];
			++i;
		}
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>

int main(void)
{
	char    *str = "lorem ipsum dolor sit amet";

	printf("%s\n",ft_strdup(str));
	
}

int		main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

	if (argc == 1)
		return (0);
	if (atoi(argv[1]) == 1)
	{
		if (!(str_dup = ft_strdup(str)))
			printf("NULL");
		else
			printf("%s\n",str_dup);
		if (str_dup == str)
			printf("\nstr_dup's adress == str's adress");
		printf("%s\n", str);
	}
	return (0);
}
*/