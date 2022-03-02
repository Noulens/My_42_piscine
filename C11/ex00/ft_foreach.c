/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:31:54 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/24 10:50:59 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		++i;
	}
}

/*#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	digit;
	int	tabo[10];
	int	i;

	i = 0;
	if (nbr == -2147483648)
		write(1, "-2146473648", 11);
	else if (nbr != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
		}
		while (nbr > 0)
		{
			digit = nbr % 10 + 48;
			nbr = nbr / 10;
			tabo[i++] = digit;
		}
		while (--i >= 0)
			write(1, &tabo[i], sizeof(int));
	}
	else
		write (1, "0", 1);
}

int	main(void)
{
	int		tab[1337];
	void	(*ptr)(int);
	int		i;

	i = 0;
	while (i < 1337)
	{
		tab[i] = i;
		++i;
	}
	ptr = &ft_putnbr;
	ft_foreach(tab, 1337, *ptr);
	return (0);
}*/
