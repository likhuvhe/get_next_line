/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:45:48 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/17 11:31:35 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *from;
	char *to;

	from = (char*)src;
	to = (char*)dst;
	if (to == from)
		return (from);
	while (n > 0)
	{
		*to = *from;
		to++;
		from++;
		n--;
	}
	return (dst);
}
