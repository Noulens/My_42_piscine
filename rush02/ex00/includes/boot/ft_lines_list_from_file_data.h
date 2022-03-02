/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines_list_from_file_data.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:54:24 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:37:06 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINES_LIST_FROM_FILE_DATA_H
# define FT_LINES_LIST_FROM_FILE_DATA_H

# include "ft_list.h"

t_list	*ft_lines_list_from_file_data(t_list *file_data);
char	*ft_next_line_from_file_data(t_list **file_data, int *i_data);
int		ft_next_line_len(t_list *file_data, int i_data);
void	ft_skip_next_byte(t_list **file_data, int *i_data);

#endif
