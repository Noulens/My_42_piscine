/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:49:54 by foster            #+#    #+#             */
/*   Updated: 2022/02/05 15:52:33 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printsqr(int x, int y, int co, int ra)
{
	if (ra > 1 && ra < y && co > 1 && co < x)
		ft_putchar(' ');
	else if ((ra == 1 && co == 1) || (x > 1 && ra == y && co == x && ra > 1))
		ft_putchar('A');
	else if ((ra == 1 && co == x) || (ra == y && co == 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	co;
	int	ra;

	if (y > 0 && x > 0)
	{
		ra = 0;
		while (++ra <= y)
		{
			co = 0;
			while (++co <= x)
				ft_printsqr(x, y, co, ra);
			ft_putchar('\n');
		}
	}
}

/*int	main(void)
{
	rush(1, 1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
