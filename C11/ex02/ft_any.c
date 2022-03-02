/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:45:30 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/24 10:51:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i++]))
			return (1);
	}
	return (0);
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

	i = 0;
	tab = malloc(sizeof(char *) * 10 + 1);
	tab[0] = 0;
	while (i < 10)
	{
		tab[i] = "0";
		i++;
	}
	tab[9] = "0";
	ptr = &ft_putnbr;
	d = ft_any(tab, ptr);
	printf("%d", d);
	return (0);
}*/
