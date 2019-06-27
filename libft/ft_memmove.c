/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:18:53 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/17 11:45:03 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *from;
	char *to;

	from = (char*)src;
	to = (char*)dst;
	if (to == from)
		return (from);
	if ((to <= from) || (to >= (from + len)))
	{
		while (len-- > 0)
		{
			*(to++) = *(from++);
		}
	}
	else
	{
		from = (char*)src + len - 1;
		to = (char*)dst + len - 1;
		while (len-- > 0)
		{
			*(to--) = *(from--);
		}
	}
	return (dst);
}
