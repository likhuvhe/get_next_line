/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:51:00 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/01 10:39:09 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	p = (char *)malloc((size + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_bzero(p, size);
	p[size] = '\0';
	return (p);
}
