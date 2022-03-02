/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:34:51 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 21:31:16 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoll.h"
#include "ft_is_unsigned_int.h"

int	ft_is_unsigned_int(char *str)
{
	long long	nbr;
	int			i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		return (0);
	if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i > 10)
		return (0);
	nbr = ft_atoll(str);
	if (nbr < 0 || nbr > UNSIGNED_INT_MAX)
		return (0);
	return (1);
}
