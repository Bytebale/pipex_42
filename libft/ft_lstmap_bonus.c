/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:49:53 by lshonta           #+#    #+#             */
/*   Updated: 2021/12/27 16:38:34 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*elem;

// 	if (!lst || !f)
// 		return (NULL);
// 	elem = ft_lstnew(f(lst->content));
// 	if (!(elem))
// 	{
// 		ft_lstclear(&lst, del);
// 		return (NULL);
// 	}
// 	new_lst = elem;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		elem = ft_lstnew(f(lst->content));
// 		if (!(elem))
// 		{
// 			ft_lstclear(&lst, del);
// 			ft_lstclear(&new_lst, del);
// 		}
// 		lst = lst->next;
// 		ft_lstadd_back(&new_lst, elem);
// 	}
// 	return (new_lst);
// }
