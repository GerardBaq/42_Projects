/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perico <perico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:11:56 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/31 00:22:07 by perico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new_node;

	lst2 = 0;
	new_node = 0;
	if(!lst || !f || !del)
		return (0);
	lst2 = ft_lstnew(f(lst->content));
	if (!lst2)
	{
//		ft_lstclear(&lst2, del);
//		ft_lstclear(&new_node, del);
		return (0);
	}
	new_node = lst2;
	lst = lst->next;
	while (lst)
	{
		new_node->next = ft_lstnew(f(lst->content));
		if (!new_node->next)
		{
			ft_lstclear(&lst2, del);
			return (0);
		}
		lst = lst->next;
		new_node = new_node->next;
	}
	return (lst2);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new_node;
	void	*aux;

	if (!lst || !f || !del)
		return (0);
	lst2 = 0;
	while (lst)
	{
		aux = f(lst->content);
		new_node = ft_lstnew(aux);
		if (!new_node)
		{
			free(aux);
			ft_lstclear(&lst2, del);
			return (0);
		}
		ft_lstadd_back(&lst2, new_node);
		lst = lst->next;
	}
	return (lst2);
}
/*

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
*/