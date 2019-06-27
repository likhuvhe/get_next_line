/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:42:44 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/28 12:31:38 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = ft_strlen(s1);
	while (n-- > 0 && s2[i] != '\0')
	{
		s1[l++] = s2[i++];
	}
	s1[l] = '\0';
	return (s1);
}
