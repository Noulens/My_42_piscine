/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_empty_lines.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:40:40 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:35:18 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "ft_remove_empty_lines.h"

void	ft_remove_empty_lines(t_list **lines_list)
{
	t_list	*prev;
	t_list	*line;
	t_list	*temp;

	ft_remove_first_consecutives_empty_lines(lines_list);
	prev = *lines_list;
	if (!prev)
		return ;
	line = prev->next;
	while (line)
	{
		if (line->data[0] == '\0')
		{
			temp = line;
			line = line->next;
			free(temp->data);
			free(temp);
		}
		else
		{
			prev->next = line;
			prev = line;
			line = line->next;
		}
	}
}

void	ft_remove_first_consecutives_empty_lines(t_list **lines_list)
{
	t_list	*prev;

	while (*lines_list && (*lines_list)->data[0] == '\0')
	{
		prev = *lines_list;
		*lines_list = (*lines_list)->next;
		free(prev->data);
		free(prev);
	}
}
