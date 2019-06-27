/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:23:58 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/05 14:09:44 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int len_dst;
	unsigned int length;

	i = 0;
	len_dst = ft_strlen(dst);
	length = ft_strlen(src) + len_dst;
	while (len_dst > dstsize && dst[i] != '\0')
	{
		return (ft_strlen(src) + dstsize);
	}
	while (src[i] != '\0' && dstsize > len_dst + 1)
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (length);
}
