/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:48:44 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:38:44 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_NBR_H
# define FT_PRINT_NBR_H

# include "ft_dico.h"

int		ft_print_nbr(unsigned int nbr, char *path);
void	ft_print_nbr_rec(unsigned int nbr, t_dico **dico, unsigned int offset);
void	ft_print_nbr_3_digits(unsigned int nbr, t_dico **dico);
void	ft_print_from_dico(unsigned int nbr, t_dico **dico);

#endif
