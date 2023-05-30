/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:53:26 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextn;
	t_list	*temp;

	nextn = *lst;
	while (nextn)
	{
		temp = nextn->next;
		del(nextn->content);
		free(nextn);
		nextn = temp;
	}
	*lst = 0;
}
