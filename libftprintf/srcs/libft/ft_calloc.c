/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:44:43 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
/*
int		main(int argc, const char *argv[])
{
	char	*str;
	char	*str2;


	str = (char *)ft_calloc(10, sizeof(int));
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, str, 30);
	write(1, "\n", 1);
	str2 = (char *)calloc(10, sizeof(int));
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, str, 10);
	write(1, "\n", 30);

}
*/