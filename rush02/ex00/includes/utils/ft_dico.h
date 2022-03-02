/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:58:26 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:40:33 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICO_H
# define FT_DICO_H

typedef struct s_dico	t_dico;
struct s_dico
{
	unsigned int		key;
	char				*literal;
};

void	ft_free_dico(t_dico **dico);

#endif
