/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:14:42 by gpotier           #+#    #+#             */
/*   Updated: 2022/02/05 17:00:11 by foster           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printsqr(int x, int y, int co, int ra)
{
	if (ra == 1 || ra == y)
	{
		if ((ra == 1 && co == 1) || (ra == y && co == x && y > 1 && x > 1))
			ft_putchar('/');
		else if ((ra == 1 && co == x) || (ra == y && co == 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	if ((co == 1 || co == x) && (ra > 1 && ra < y))
		ft_putchar('*');
	else if (co > 1 && co < x && ra > 1 && ra < y)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	co;
	int	ra;

	if (x > 0 && y > 0)
	{
		ra = 0;
		while (++ra <= y)
		{
			co = 1;
			while (co <= x)
			{
				ft_printsqr(x, y, co, ra);
				co++;
			}
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
