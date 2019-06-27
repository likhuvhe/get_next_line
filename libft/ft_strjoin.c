/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 16:31:25 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/14 13:55:42 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	unsigned	l;

	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc((l + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strcpy(new, (char *)s1);
	new = ft_strcat(new, (char *)s2);
	return (new);
}
