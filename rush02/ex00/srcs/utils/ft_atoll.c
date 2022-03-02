/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:08:55 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/20 20:57:02 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoll.h"

long long	ft_atoll(char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	while (ft_isaspace(str, i) == 1)
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		++i;
	}
	return (sign * result);
}

int	ft_isaspace(char *str, int i)
{
	int	j;

	j = 0;
	while (WHITESPACE[j])
	{
		if (str[i] == WHITESPACE[j])
			return (1);
		++j;
	}
	return (0);
}
