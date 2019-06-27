/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:05:54 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/12 15:11:25 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	if (content)
	{
		if (!(head->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
	}
	else
	{
		head->content = NULL;
		head->content_size = 0;
	}
	head->next = NULL;
	return (head);
}
