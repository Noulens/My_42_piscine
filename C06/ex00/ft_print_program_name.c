/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:12:19 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 17:56:25 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p)
		write(1, p++, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(*argv);
	write(1, "\n", 1);
	return (0);
}
