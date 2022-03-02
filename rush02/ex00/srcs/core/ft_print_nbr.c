/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:16:57 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:48:54 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dico.h"
#include "ft_dicterror_nbr.h"
#include "ft_display.h"
#include "ft_print_nbr.h"
#include "ft_write_dico.h"

int	ft_print_nbr(unsigned int nbr, char *path)
{
	t_dico	**dico;

	dico = ft_get_dico(path);
	if (!dico)
		return (0);
	if (ft_dicterror_nbr(nbr, dico))
	{
		ft_free_dico(dico);
		return (0);
	}
	if (nbr == 0)
		ft_print_from_dico(0, dico);
	else
		ft_print_nbr_rec(nbr, dico, 1);
	ft_putstr("\n");
	ft_free_dico(dico);
	return (1);
}

void	ft_print_nbr_rec(unsigned int nbr, t_dico **dico, unsigned int offset)
{
	if (nbr < 1000)
	{
		ft_print_nbr_3_digits(nbr, dico);
		return ;
	}
	offset *= 1000;
	ft_print_nbr_rec(nbr / 1000, dico, offset);
	if ((nbr / 1000) % 1000 != 0)
	{
		ft_putstr(" ");
		ft_print_from_dico(offset, dico);
	}
	if (nbr % 1000 != 0)
	{
		ft_putstr(" ");
		ft_print_nbr_3_digits(nbr % 1000, dico);
	}
}

void	ft_print_nbr_3_digits(unsigned int nbr, t_dico **dico)
{
	if (nbr / 100 != 0)
	{
		ft_print_from_dico(nbr / 100, dico);
		ft_putstr(" ");
		ft_print_from_dico(100, dico);
	}
	if (nbr % 100 != 0 && nbr % 100 < 20)
	{
		if (nbr / 100 != 0)
			ft_putstr(" ");
		ft_print_from_dico(nbr % 100, dico);
		return ;
	}
	if ((nbr / 10) % 10 != 0)
	{
		if (nbr / 100 != 0)
			ft_putstr(" ");
		ft_print_from_dico((nbr / 10) % 10 * 10, dico);
	}
	if (nbr % 10 != 0)
	{
		if (nbr / 100 != 0 || (nbr / 10) % 10 != 0)
			ft_putstr(" ");
		ft_print_from_dico(nbr % 10, dico);
	}
}

void	ft_print_from_dico(unsigned int nbr, t_dico **dico)
{
	int	i;

	i = 0;
	while (dico[i])
	{
		if (nbr == dico[i]->key)
		{
			ft_putstr(dico[i]->literal);
			return ;
		}
		++i;
	}
}
