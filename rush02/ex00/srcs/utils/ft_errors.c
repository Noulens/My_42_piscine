/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:37:06 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:41:42 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int	ft_error(void)
{
	ft_putstr("Error\n");
	return (1);
}

int	ft_dict_error(void)
{
	ft_putstr("Dict Error\n");
	return (1);
}
