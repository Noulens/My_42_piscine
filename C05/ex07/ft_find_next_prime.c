/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:04:48 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/14 15:13:18 by tnoulens         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
			nb++;
	}
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_find_next_prime(2100001));
	return (0);
}*/