/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:49:44 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/21 18:59:16 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		++i;
	}
}
