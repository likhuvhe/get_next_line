/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:21:56 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/04 18:07:39 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p_h;
	char	*p_n;
	int		i;
	int		j;

	p_n = (char *)needle;
	p_h = (char *)haystack;
	if (!(*needle))
		return (p_h);
	i = 0;
	while (p_h[i] != '\0' && i < (int)len)
	{
		j = 0;
		while (p_h[i + j] == p_n[j] && i + j < (int)len)
		{
			if (p_n[j + 1] == '\0')
				return (&p_h[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
