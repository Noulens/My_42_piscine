/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dico.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:54:53 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:31:34 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WRITE_DICO_H
# define FT_WRITE_DICO_H

# include "ft_dico.h"

t_dico	**ft_get_dico(char *path);
t_dico	**ft_store_splitted(char **to_split);
void	ft_write_dico(t_dico **dico, int i, char **splitted);

#endif
