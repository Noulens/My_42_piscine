/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_data.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:18:26 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:37:01 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_FILE_DATA_H
# define FT_GET_FILE_DATA_H

# include "ft_list.h"

# define BUFFER_SIZE 4096

t_list	*ft_get_file_data(char *path);
int		ft_add_data(t_list **file_data, char *buffer, int bytes_read);

#endif
