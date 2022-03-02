/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:20:29 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/22 18:14:54 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + 48);
	if (tab[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_init(int *tab, int n, int p)
{
	int	i;

	i = p;
	if (n == 1)
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	else
	{
		while (i < n)
		{
			if (i == 0)
				tab[i] = i;
			else
				tab[i] = tab[i - 1] + 1;
			++i;
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	max;
	int	p;

	p = 0;
	ft_init(tab, n, p);
	if (n == 1)
		return ;
	p = n;
	while (p > 0)
	{
		ft_print_tab(tab, n);
		max = 10 + p - n - 1;
		if (tab[p - 1] < max)
			tab[p - 1] += 1;
		else
		{
			tab[p - 2] += 1;
			ft_init(tab, n, p - 1);
			if (tab[p - 2] < max - 1)
				p = n;
			else
				--p;
		}
	}
}

int	main ()
{
	ft_print_combn(1);
	return (0);
}
