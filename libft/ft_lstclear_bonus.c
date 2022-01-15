/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:46:38 by lshonta           #+#    #+#             */
/*   Updated: 2021/12/27 16:38:22 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*t;
// 	t_list	*tmp;

// 	t = *lst;
// 	while (t)
// 	{
// 		tmp = t->next;
// 		ft_lstdelone(t, del);
// 		t = tmp;
// 	}
// 	*lst = NULL;
// }
