/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_empty_lines.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:59:50 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:37:08 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REMOVE_EMPTY_LINES_H
# define FT_REMOVE_EMPTY_LINES_H

# include "ft_list.h"

void	ft_remove_empty_lines(t_list **lines_list);
void	ft_remove_first_consecutives_empty_lines(t_list **lines_list);

#endif
