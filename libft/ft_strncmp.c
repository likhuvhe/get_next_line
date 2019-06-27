/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:01:10 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/14 17:00:04 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*comp1;
	unsigned char	*comp2;
	unsigned int	i;

	comp1 = (unsigned char*)s1;
	comp2 = (unsigned char*)s2;
	i = 0;
	while (n--)
	{
		if (!(comp1[i] || comp2[i]))
			break ;
		if (comp1[i] != comp2[i])
		{
			if ((comp1[i] - comp2[i]) < 0)
				return (-1);
			else if ((comp1[i] - comp2[i]) > 0)
				return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
