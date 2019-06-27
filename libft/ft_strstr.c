/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:23:14 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/03 17:37:38 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*p_h;
	char	*p_n;
	int		i;
	int		j;

	p_n = (char *)needle;
	p_h = (char *)haystack;
	if (!(*p_n))
		return (p_h);
	i = 0;
	while (p_h[i] != '\0')
	{
		j = 0;
		while (p_h[i + j] == p_n[j])
		{
			if (p_n[j + 1] == '\0')
				return (&p_h[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
