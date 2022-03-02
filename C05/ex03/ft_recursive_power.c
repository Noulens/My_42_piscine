/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:21:09 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/11 13:39:28 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0 && n == 0) || power == 0)
		return (1);
	return (ft_recursive_power(n, power - 1) * n);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_recursive_power(10, 3));
	return (0);
}*/
