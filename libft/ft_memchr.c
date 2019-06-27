/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:01:12 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/21 15:38:34 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while (n != 0)
	{
		if (*str++ == (unsigned char)c)
		{
			return (str - 1);
		}
		n--;
	}
	return (NULL);
}
