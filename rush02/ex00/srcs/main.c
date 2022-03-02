/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:46:32 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/20 20:44:26 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoll.h"
#include "ft_errors.h"
#include "ft_is_unsigned_int.h"
#include "ft_print_nbr.h"
#include "ft_string_utils.h"

int	main(int argc, char **argv)
{
	unsigned int	nbr;
	int				is_ok;

	if (argc == 3 && ft_is_unsigned_int(argv[2]))
	{
		nbr = (unsigned int) ft_atoll(argv[2]);
		is_ok = ft_print_nbr(nbr, argv[1]);
	}
	else if (argc == 2 && ft_is_unsigned_int(argv[1]))
	{
		nbr = (unsigned int) ft_atoll(argv[1]);
		is_ok = ft_print_nbr(nbr, "./numbers.dict");
	}
	else
		return (ft_error());
	if (!is_ok)
		return (ft_dict_error());
	return (0);
}
