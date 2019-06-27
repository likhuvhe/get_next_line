/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:07:58 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/11 16:26:21 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*new;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	new = (char *)malloc((l + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[l] = '\0';
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
