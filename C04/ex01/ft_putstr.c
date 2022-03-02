/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:20:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/08 18:29:42 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = -1;
	while (*(str + ++lenght))
		write(1, str + lenght, 1);
}

/*#include <stdio.h>

int main(void)
{
	ft_putstr("Moments lost in time like tears in rain");
	return (0);
}*/
