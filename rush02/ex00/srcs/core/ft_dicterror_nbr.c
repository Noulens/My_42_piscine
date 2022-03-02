/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dicterror_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:25:50 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:48:23 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dico.h"
#include "ft_dicterror_nbr.h"
#include "ft_display.h"

int	ft_dicterror_nbr(unsigned int nbr, t_dico **dico)
{
	if (nbr == 0)
		return (ft_not_found_in_dico(0, dico));
	return (ft_dicterror_nbr_rec(nbr, dico, 1));
}

int	ft_dicterror_nbr_rec(unsigned int nbr, t_dico **dico, unsigned int offset)
{
	int	error;

	error = 0;
	if (nbr < 1000)
		return (ft_dicterror_nbr_3_digits(nbr, dico));
	offset *= 1000;
	error |= ft_dicterror_nbr_rec(nbr / 1000, dico, offset);
	error |= ft_not_found_in_dico(offset, dico);
	if (nbr % 1000 != 0)
		error |= ft_dicterror_nbr_3_digits(nbr % 1000, dico);
	return (error);
}

int	ft_dicterror_nbr_3_digits(unsigned int nbr, t_dico **dico)
{
	unsigned int	digit_hundreds;
	unsigned int	digit_decades;
	unsigned int	digit_units;
	int				error;

	digit_hundreds = nbr / 100;
	digit_decades = (nbr / 10) % 10;
	digit_units = nbr % 10;
	error = 0;
	if (digit_hundreds != 0)
	{
		error |= ft_not_found_in_dico(digit_hundreds, dico);
		error |= ft_not_found_in_dico(100, dico);
	}
	if (nbr % 100 < 20)
	{
		error |= ft_not_found_in_dico(nbr % 100, dico);
		return (error);
	}
	if (digit_decades != 0)
		error |= ft_not_found_in_dico(digit_decades * 10, dico);
	if (digit_units != 0)
		error |= ft_not_found_in_dico(digit_units, dico);
	return (error);
}

int	ft_not_found_in_dico(unsigned int nbr, t_dico **dico)
{
	int	i;

	i = 0;
	while (dico[i])
	{
		if (nbr == dico[i]->key)
			return (0);
		++i;
	}
	return (1);
}
