/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines_list_from_file_data.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:41:48 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:34:56 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lines_list_from_file_data.h"
#include "ft_list.h"

t_list	*ft_lines_list_from_file_data(t_list *file_data)
{
	t_list	*lines_list;
	char	*line;
	int		i_data;
	int		add_line_success;

	if (!file_data)
		return (0);
	lines_list = 0;
	line = 0;
	add_line_success = 1;
	i_data = 0;
	while (add_line_success && file_data)
	{
		line = ft_next_line_from_file_data(&file_data, &i_data);
		ft_skip_next_byte(&file_data, &i_data);
		if (!line)
			break ;
		add_line_success = ft_list_push_back(&lines_list, line);
	}
	if (!line || !add_line_success)
	{
		ft_list_clear(lines_list, &free);
		return (0);
	}
	return (lines_list);
}

char	*ft_next_line_from_file_data(t_list **file_data, int *i_data)
{
	char	*str;
	int		str_len;
	int		i;

	str_len = ft_next_line_len(*file_data, *i_data);
	str = (char *) malloc(sizeof(*str) * (str_len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < str_len)
	{
		str[i] = (*file_data)->data[*i_data];
		(*i_data)++;
		if (!(*file_data)->data[*i_data])
		{
			*file_data = (*file_data)->next;
			*i_data = 0;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_next_line_len(t_list *file_data, int i_data)
{
	int	count;

	count = 0;
	while (file_data && file_data->data[i_data] != '\n')
	{
		count++;
		i_data++;
		if (!file_data->data[i_data])
		{
			file_data = file_data->next;
			i_data = 0;
		}
	}
	return (count);
}

void	ft_skip_next_byte(t_list **file_data, int *i_data)
{
	if (!*file_data)
		return ;
	(*i_data)++;
	if (!(*file_data)->data[*i_data])
	{
		*file_data = (*file_data)->next;
		*i_data = 0;
	}
}
