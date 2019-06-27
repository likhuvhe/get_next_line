/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:26:58 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/31 10:21:13 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	p = (void *)malloc(size * sizeof(size_t));
	if (!p)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
