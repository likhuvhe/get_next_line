/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:47:11 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/14 11:19:33 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	if (str[0] != '\0')
		count++;
	return (count);
}

static char		*ft_word(const char *str, char c, int *i)
{
	char	*p;
	int		j;

	if (!str && !c)
		return (NULL);
	if (!(p = (char*)malloc(ft_strlen(str) + 1 * sizeof(char))))
		return (NULL);
	j = 0;
	while (str[*i] != '\0' && str[*i] != c)
	{
		p[j] = str[*i];
		j++;
		*i += 1;
	}
	p[j] = '\0';
	while (str[*i] == c)
		*i += 1;
	return (p);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		nwrd;
	char	**array;

	if (!s && !c)
		return (NULL);
	if (s == 0)
		return (0);
	i = 0;
	k = 0;
	nwrd = ft_wordcount(s, c);
	if (!(array = (char **)malloc((nwrd + 2) * sizeof(array))))
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (k < nwrd && s[i])
	{
		array[k] = ft_word(s, c, &i);
		k++;
	}
	array[k] = NULL;
	return (array);
}
