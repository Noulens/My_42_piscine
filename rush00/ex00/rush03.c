/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:37:49 by gpotier           #+#    #+#             */
/*   Updated: 2022/02/05 15:51:16 by gpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printsqr(int x, int y, int ra, int co)
{
	if (ra > 1 && ra < y && co > 1 && co < x)
		ft_putchar(' ');
	else if (co == 1 && (ra == 1 || ra == y))
		ft_putchar('A');
	else if (co == x && (ra == 1 || ra == y))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	ra;
	int	co;

	if (x > 0 && y > 0)
	{
		ra = 0;
		while (++ra <= y)
		{
			co = 0;
			while (++co <= x)
				ft_printsqr(x, y, ra, co);
			ft_putchar('\n');
		}
	}
}
