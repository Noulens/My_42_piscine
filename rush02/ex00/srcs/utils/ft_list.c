/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:42:25 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:42:14 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list *) malloc(sizeof(*list));
	if (!list)
		return (0);
	list->data = data;
	list->next = 0;
	return (list);
}

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	return (ft_list_size(begin_list->next) + 1);
}

int	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		if (!*begin_list)
			return (0);
		return (1);
	}
	return (ft_list_push_back(&(*begin_list)->next, data));
}

void	ft_list_clear(t_list *begin_list, void (*free_data)(void *))
{
	if (!begin_list)
		return ;
	ft_list_clear(begin_list->next, free_data);
	if (free_data)
		free_data(begin_list->data);
	free(begin_list);
}

char	**ft_strs_from_str_list(t_list *lines_list)
{
	char	**lines;
	int		nbr_lines;
	int		i;

	if (!lines_list)
		return (0);
	nbr_lines = ft_list_size(lines_list);
	lines = (char **) malloc(sizeof(*lines) * (nbr_lines + 1));
	if (!lines)
		return (0);
	i = 0;
	while (lines_list)
	{
		lines[i] = lines_list->data;
		lines_list = lines_list->next;
		i++;
	}
	lines[i] = 0;
	return (lines);
}
