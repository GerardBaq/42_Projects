/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:02:36 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	flag;

	flag = 0;
	i = 0;
	if (!s[i])
		return (flag);
	if (s[i] != c)
		flag = 1;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			++flag;
		++i;
	}
	return (flag);
}

static size_t	str_size(char const *s, char c, size_t i)
{
	size_t	length;

	length = 0;
	while (s[i] && s[i] != c)
	{
		++length;
		++i;
	}
	return (length);
}

static char	**ft_free(char **mat, int i)
{
	while (i > 0)
	{
		--i;
		free((void *)mat[i]);
	}
	free(mat);
	return (0);
}

static char	**ft_fill_array(char const *s, char **mat, char c, size_t mat_len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] && mat_len != 0 && j < mat_len)
	{
		k = 0;
		while (s[i] == c)
			++i;
		mat[j] = (char *)malloc((str_size(s, c, i) + 1) * sizeof(char));
		if (!mat[j])
			return (ft_free(mat, j));
		while (s[i] && s[i] != c)
		{
			mat[j][k] = s[i];
			++i;
			++k;
		}
		mat[j][k] = '\0';
		++j;
	}
	mat[j] = 0;
	return (mat);
}
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

char	**ft_split(char const *s, char c)
{
	size_t	mat_len;
	char	**mat;

	mat_len = word_count(s, c);
	mat = (char **)malloc((mat_len + 1) * sizeof(char *));
	if (!mat)
		return (0);
	return (ft_fill_array(s, mat, c, mat_len));
}
/*
int	main(void)
{
	const	char	str[] = "Hello que tal estas? Pollastre";
	char	**mat;

	mat = ft_split("   lorem   ipsum dolor     sit amet, consectetur   
		adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	write(1, mat[0], 5);
	write(1, "\n", 1);
	write(1, mat[1], 5);
	write(1, "\n", 1);
	write(1, mat[2], 5);
	write(1, "\n", 1);
	write(1, mat[3], 3);
	write(1, "\n", 1);
	write(1, mat[4], 5);
	write(1, "\n", 1);
	write(1, mat[5], 11);
	write(1, "\n", 1);
	write(1, mat[6], 10);
	write(1, "\n", 1);
	write(1, mat[7], 5);
	write(1, "\n", 1);
	write(1, mat[8], 3);
	write(1, "\n", 1);
	write(1, mat[9], 3);
	write(1, "\n", 1);
	write(1, mat[10], 6);
	write(1, "\n", 1);
	write(1, mat[11], 11);
	write(1, "\n", 1);
	write(1, mat[12], 1);
	write(1, "\n", 1);
}
*/