/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:55:19 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/17 11:48:09 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *from;
	char *to;

	from = (char*)src;
	to = (char*)dest;
	while (n-- > 0)
	{
		if (*from == (char)c)
		{
			*(to++) = *(from++);
			return (to);
		}
		*(to++) = *(from++);
	}
	return (NULL);
}
