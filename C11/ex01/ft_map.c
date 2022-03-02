/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:39:52 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/24 10:51:03 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	i = 0;
	res = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		++i;
	}
	return (res);
}

/*#include <unistd.h>
#include <stdio.h>

int	ft_putnbr(int nbr)
{
	nbr += 1;
	return (nbr);
}

int	main(void)
{
	int	tab[150];
	int	(*ptr)(int);
	int	i;
	int	j;
	int *p;

	j = 0;
	i = 0;
	while (i < 150)
	{
		tab[i] = i;
		++i;
	}
	ptr = &ft_putnbr;
	p = ft_map(tab, 150, *ptr);
	while (j < 150)
		printf("%d", p[j++]);
	return (0);
}*/
