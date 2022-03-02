/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:45:14 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/03 20:07:30 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	digit;
	int	i;
	int	tab[10];	

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb != 0)
	{
		i = 0;
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		while (nb > 0)
		{
			digit = nb % 10 + 48;
			nb = nb / 10;
			tab[i++] = digit;
		}
		while (--i >= 0)
			write(1, &tab[i], 1);
	}
	else
		write(1, "0", 1);
}
