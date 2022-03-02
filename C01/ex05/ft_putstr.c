/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:04:19 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/04 12:25:21 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	letter;

	while (*str != '\0')
	{
		letter = *str;
		write(1, &letter, 1);
		++str;
	}
}

/*int	main ()
{
	char *tab = {"Like tears in the rain"};

	ft_putstr(tab);
	return (0);
}*/
