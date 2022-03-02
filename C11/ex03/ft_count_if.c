/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:52:20 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/24 10:50:52 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i++]))
			counter++;
	}
	return (counter);
}

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_putnbr(char *nbr)
{
	int i;

	i = *nbr - 48;
	return (i);
}

int	main(void)
{
	char	**tab;
	int		(*ptr)(char*);
	int		d;
	int		i;
	int		length;

	length = 15;
	i = 0;
	tab = malloc(sizeof(char *) * length + 1);
	tab[0] = 0;
	while (i < length)
	{
		tab[i] = "0";
		i++;
	}
	tab[9] = "3";
	tab[8] = "1";
	ptr = &ft_putnbr;
	d = ft_count_if(tab, length, ptr);
	printf("%d", d);
	return (0);
}*/
