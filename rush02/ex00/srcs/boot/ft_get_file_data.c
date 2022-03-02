/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:39:20 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:47:14 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_get_file_data.h"
#include "ft_list.h"

t_list	*ft_get_file_data(char *path)
{
	int		file;
	t_list	*file_data;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;
	int		add_data_success;

	if (!path)
		return (0);
	file = open(path, O_RDONLY);
	if (file == -1)
		return (0);
	file_data = 0;
	bytes_read = read(file, buffer, BUFFER_SIZE);
	while (bytes_read != -1 && bytes_read)
	{
		add_data_success = ft_add_data(&file_data, buffer, bytes_read);
		if (!add_data_success)
			break ;
		bytes_read = read(file, buffer, BUFFER_SIZE);
	}
	if (close(file) == -1 || bytes_read == -1 || !add_data_success)
		return (0);
	return (file_data);
}

int	ft_add_data(t_list **file_data, char buffer[BUFFER_SIZE], int bytes_read)
{
	char	*data;
	int		i;

	if (!file_data)
		return (0);
	if (!*file_data)
	{
		data = (char *) malloc(sizeof(*data) * (bytes_read + 1));
		if (!data)
			return (0);
		i = 0;
		while (i < bytes_read)
		{
			data[i] = buffer[i];
			i++;
		}
		data[i] = '\0';
		*file_data = ft_create_elem(data);
		if (!*file_data)
			return (0);
		return (1);
	}
	return (ft_add_data(&(*file_data)->next, buffer, bytes_read));
}
