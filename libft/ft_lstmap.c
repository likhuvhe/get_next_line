/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:36:39 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/14 11:16:30 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *iter;

	if (!lst && !f)
		return (NULL);
	if (lst == 0)
		return (0);
	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	iter = f(lst);
	new = iter;
	while (lst->next)
	{
		lst = lst->next;
		iter->next = f(lst);
		iter = iter->next;
	}
	return (new);
}
