/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dicterror_nbr.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:36:24 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:36:51 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICTERROR_NBR_H
# define FT_DICTERROR_NBR_H

# include "ft_dico.h"

int	ft_dicterror_nbr(unsigned int nbr, t_dico **dico);
int	ft_dicterror_nbr_rec(unsigned int nbr, t_dico **dico, unsigned int offset);
int	ft_dicterror_nbr_3_digits(unsigned int nbr, t_dico **dico);
int	ft_not_found_in_dico(unsigned int nbr, t_dico **dico);

#endif
