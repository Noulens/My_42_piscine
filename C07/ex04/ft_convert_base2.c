/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:44:23 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/21 10:51:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *nbr_base, int l);

int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_checkerror(char *base);

int		ft_in_base(char c, char *base, int l);

int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	ft_rev_int_tab(char *tab, int size);

void	ft_rev_int_tab(char *tab, int size)
{
	int		i;
	char	swap;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		++i;
		--size;
	}
}

void	ft_putnbr_base(int nbr, char *base, char *nbr_base, int l)
{
	long	nblong;
	char	digit;
	int		i;

	nblong = nbr;
	i = 0;
	if (nblong < 0)
	{
		*nbr_base = '-';
		++nbr_base;
		nblong *= -1;
	}
	if (nbr == 0)
	{
		nbr_base[0] = base[0];
		i = 1;
	}
	while (nblong > 0)
	{
		digit = base[nblong % l];
		nblong = nblong / l;
		nbr_base[i++] = digit;
	}
	ft_rev_int_tab(nbr_base, i);
	nbr_base[i] = 0;
}
