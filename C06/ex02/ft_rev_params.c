/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:01:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 18:29:39 by tnoulens         ###   ########.fr       */
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
	int	lenght;

	if (argc >= 2)
	{	
		lenght = argc - 1;
		while (lenght > 0)
		{
			ft_putstr(argv[lenght]);
			write(1, "\n", 1);
			--lenght;
		}
	}
	return (0);
}
