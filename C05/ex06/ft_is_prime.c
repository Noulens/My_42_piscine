/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:23:55 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/14 15:03:14 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iseven(int nb)
{
	if (nb % 2 == 0)
		return (1);
	return (0);
}

int	ft_is_prime(int nb)
{
	unsigned long	i;

	i = 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (ft_iseven(nb))
		return (0);
	else
	{
		while (i <= (unsigned long)nb / i)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	long	i;

	i = 97770;
	while (i <= 97771)
	{
		printf("%ld: %d\n",i ,  ft_is_prime(i));
		++i;
	}
	return (0);
}*/