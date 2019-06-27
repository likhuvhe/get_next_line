/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:38:48 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/14 17:02:18 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_comp(unsigned char s1, unsigned char s2)
{
	if ((s1 - s2) < 0)
		return (-1);
	else if ((s1 - s2) > 0)
		return (1);
	else
		return (0);
}

int			ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*comp1;
	unsigned char	*comp2;

	comp1 = (unsigned char*)s1;
	comp2 = (unsigned char*)s2;
	i = 0;
	while ((comp1[i] != '\0') && (comp2[i] != '\0'))
	{
		if (comp1[i] != comp2[i])
		{
			return (ft_comp(comp1[i], comp2[i]));
		}
		i++;
	}
	if (comp1[i] == '\0' && comp2[i] != '\0')
		return (ft_comp(comp1[i], comp2[i]));
	if (comp2[i] == '\0' && comp1[i] != '\0')
		return (ft_comp(comp1[i], comp2[i]));
	return (0);
}
