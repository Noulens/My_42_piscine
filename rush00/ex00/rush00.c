/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:22:15 by foster            #+#    #+#             */
/*   Updated: 2022/02/05 16:24:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printsqr(int x, int y, int co, int ra)
{
	if ((co == 1 || co == x) && (ra == 1 || ra == y))
		ft_putchar('o');
	else if ((co > 1 && co < x) && (ra == 1 || ra == y))
		ft_putchar('-');
	else if (co == 1 || co == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (y > 0 && x > 0)
	{
		row = 0;
		while (++row <= y)
		{
			column = 0;
			while (++column <= x)
				ft_printsqr(x, y, column, row);
			ft_putchar('\n');
		}
	}
}

/*int	main(void)
{
	rush(10, 1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
