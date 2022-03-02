/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dico.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:17:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/20 20:37:14 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_atoll.h"
#include "ft_dico.h"
#include "ft_error_format.h"
#include "ft_get_lines.h"
#include "ft_is_unsigned_int.h"
#include "ft_string_utils.h"
#include "ft_string_tab_utils.h"
#include "ft_split_in_2.h"
#include "ft_write_dico.h"

t_dico	**ft_get_dico(char *path)
{
	t_dico	**dico;
	char	**lines;

	lines = ft_get_lines(path);
	if (!lines)
		return (0);
	if (ft_error_format(lines))
	{
		ft_free_strs(lines);
		return (0);
	}
	dico = ft_store_splitted(lines);
	ft_free_strs(lines);
	return (dico);
}

t_dico	**ft_store_splitted(char **to_split)
{
	t_dico	**dico;
	char	**splitted;
	int		i;
	int		j;

	dico = (t_dico **) malloc(sizeof(*dico) * (ft_splen(to_split) + 1));
	i = 0;
	j = 0;
	while (to_split[i])
	{
		splitted = ft_split_in_2(to_split[i], ":");
		if (!splitted)
			return (0);
		if (ft_splen(splitted) >= 2 && ft_is_unsigned_int(splitted[0]))
		{
			ft_write_dico(dico, j, splitted);
			++j;
		}
		ft_free_strs(splitted);
		++i;
	}
	dico[j] = 0;
	return (dico);
}

void	ft_write_dico(t_dico **dico, int i, char **splitted)
{
	unsigned int	key;
	char			*literal;

	key = (unsigned int) ft_atoll(splitted[0]);
	splitted[1] = ft_trimmed(splitted[1]);
	literal = ft_strdup(splitted[1]);
	dico[i] = (t_dico *) malloc(sizeof(*dico[i]));
	dico[i]->key = key;
	dico[i]->literal = literal;
}
