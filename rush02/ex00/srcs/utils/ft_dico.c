/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:00:13 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:41:23 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dico.h"

void	ft_free_dico(t_dico **dico)
{
	int	i;

	i = 0;
	while (dico[i])
	{
		free(dico[i]->literal);
		free(dico[i]);
		i++;
	}
	free(dico);
}
