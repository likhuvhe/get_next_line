/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:23:08 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/04 16:19:13 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	sub[len] = '\0';
	while (s[start] != '\0' && len--)
	{
		sub[i++] = s[start++];
	}
	return (sub);
}
