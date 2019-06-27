/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:29:53 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/16 13:28:35 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copy;
	int		l;
	int		len;
	int		c;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	l = 0;
	while (s[l] && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		l++;
	while (len >= 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (len < l)
		len = l - 1;
	copy = (char *)malloc((len - l + 2) * sizeof(char));
	if (!(copy))
		return (NULL);
	c = 0;
	while (l <= len)
	{
		copy[c++] = s[l++];
	}
	copy[c] = '\0';
	return (copy);
}
