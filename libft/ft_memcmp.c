/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:01:42 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/28 11:35:43 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;
	unsigned int	i;

	i = 0;
	cmp1 = (unsigned char*)s1;
	cmp2 = (unsigned char*)s2;
	while (n--)
	{
		if (cmp1[i] != cmp2[i])
		{
			return (cmp1[i] - cmp2[i]);
		}
		i++;
	}
	return (0);
}
