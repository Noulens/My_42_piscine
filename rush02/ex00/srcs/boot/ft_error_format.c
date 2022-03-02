/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:46:26 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:32:05 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error_format.h"

int	ft_error_format(char **lines)
{
	int	i;

	i = 0;
	while (lines[i])
	{
		if (ft_error_line_format(lines[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_error_line_format(char *line)
{
	int	i;

	i = 0;
	if (line[i] == '+' || line[i] == '-')
		i++;
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	while (line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (1);
	i++;
	while (line[i] == ' ')
		i++;
	while (line[i])
	{
		if (!(line[i] >= ' ' && line[i] <= '~'))
			return (1);
		i++;
	}
	return (0);
}
