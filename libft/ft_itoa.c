/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:05:37 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/11 10:44:33 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len - 1] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
