/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:58:38 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/29 09:41:45 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	ch;

	p = (char*)s;
	ch = (char)c;
	while (*p && *p != ch)
	{
		p++;
	}
	if (*p == ch)
	{
		return (p);
	}
	if (!ch && *p == '\0')
	{
		return (p);
	}
	return (NULL);
}
