/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:09:17 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/08 18:18:22 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*(str + lenght))
		++lenght;
	return (lenght);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_strlen("Moments lost in time like tears in rain"));
	return (0);
}*/
