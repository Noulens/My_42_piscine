/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:53:09 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 16:29:58 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		i = 1;
		result = 1;
		while (i <= nb)
		{
			result = result * i;
			++i;
		}
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(248));
	return (0);
}*/
