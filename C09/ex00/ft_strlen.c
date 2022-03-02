/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/22 16:27:41 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		++str;
	}
	return (i);
}

/*int	main ()
{
	int a;
	char *tab = {"Like tears in the rain"};

	a = ft_strlen(tab);
	printf("%d", a);
}*/
