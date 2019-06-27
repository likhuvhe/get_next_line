/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:08:40 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/01 13:44:41 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	l;
	int				i;
	char			*new;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	i = 0;
	new = (char *)malloc((l + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[l] = '\0';
	while (s[i] != '\0')
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
