/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:41:44 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:33:33 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_get_file_data.h"
#include "ft_lines_list_from_file_data.h"
#include "ft_list.h"
#include "ft_remove_empty_lines.h"

char	**ft_get_lines(char *path)
{
	t_list	*file_data;
	t_list	*lines_list;
	char	**lines;

	file_data = ft_get_file_data(path);
	lines_list = ft_lines_list_from_file_data(file_data);
	ft_list_clear(file_data, &free);
	ft_remove_empty_lines(&lines_list);
	lines = ft_strs_from_str_list(lines_list);
	if (lines)
		ft_list_clear(lines_list, 0);
	else
		ft_list_clear(lines_list, &free);
	return (lines);
}
