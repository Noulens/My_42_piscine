/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:58:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/24 10:51:24 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted_ascending;
	int	sorted_descending;

	sorted_ascending = 1;
	sorted_descending = 1;
	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
			sorted_ascending = 0;
		if ((*f)(tab[i - 1], tab[i]) < 0)
			sorted_descending = 0;
		i++;
	}
	return (sorted_ascending || sorted_descending);
}

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_checknbr(int nbr1, int nbr2)
{
	if (nbr1 < nbr2)
		return (-1);
	if (nbr1 == nbr2)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int	*tab;
	int	(*ptr)(int, int);
	int	d;
	int	i;
	int	length;

	length = 15;
	i = 0;
	tab = malloc(sizeof(int) * length);
	tab[0] = 0;
	while (i < 15)
	{
		tab[i] = length;
		--length;
		i++;
	}
	tab[14] = 0;
	ptr = &ft_checknbr;
	d = ft_is_sort(tab, 15, ptr);
	printf("%d", d);
	return (0);
}*/

/*int	main(void)
{
	int	*tab;
	int	(*ptr)(int, int);
	int	d;
	int	i;
	int	length;

	length = 15;
	i = 0;
	tab = malloc(sizeof(int) * length);
	tab[0] = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	tab[14] = 13;
	ptr = &ft_checknbr;
	d = ft_is_sort(tab, 15, ptr);
	printf("%d", d);
	return (0);
}*/
