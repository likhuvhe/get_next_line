/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 14:33:55 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/02 15:21:54 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned int	l;

	l = ft_strlen(s1);
	copy = (char *)malloc((l + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, s1);
	copy[l] = '\0';
	return (copy);
	free(copy);
}
