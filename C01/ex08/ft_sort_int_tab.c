/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:47:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/05 17:21:14 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int j, int i, int *tab)
{
	int	swap;

	swap = tab[j];
	tab[j] = tab[i];
	tab[i] = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (size == 1)
		return ;
	while (j < size - 1)
	{
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				ft_swap(j, i, tab);
				i = j + 1;
			}
			else
				++i;
		}
		++j;
		i = j + 1;
	}
}

/*int	main(void)
{
	int tab[] = {91,-2,-56};
	int i = 0;

	ft_sort_int_tab(tab, 3);
	while (i < 15)
		printf("%d", tab[i++]);
}*/
