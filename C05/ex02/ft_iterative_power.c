/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:08:15 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/11 13:20:23 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int power)
{
	int	i;
	int	powered;

	if (power < 0)
		return (0);
	if (power == 0 && n == 0)
		return (1);
	i = 0;
	powered = 1;
	while (i < power)
	{
		powered = n * powered;
		++i;
	}
	return (powered);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(10, 3));
	return (0);
}*/
