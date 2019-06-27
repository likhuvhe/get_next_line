/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:13:34 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/05 16:41:59 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	sign;
	unsigned int	res;
	unsigned int	i;

	sign = 1;
	res = 0;
	i = 0;
	if (ft_strlen(str) >= 19 && ft_strcmp("9223372036854775807", str) < 0)
		return (-1);
	else if (ft_strlen(str) >= 20 && ft_strcmp("-9223372036854775808", str) < 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit((unsigned int)str[i]))
		res = res * 10 + str[i++] - '0';
	return (sign * res);
}
