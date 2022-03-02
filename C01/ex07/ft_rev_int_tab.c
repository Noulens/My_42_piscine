/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:07:04 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/04 14:32:50 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		++i;
		--size;
	}
}

/*int	main ()
{
	int	i;
	int t[] = {0,1,2,3,4,5,6,7,8,9};

	i = 0;
	ft_rev_int_tab(t, 10);
	while (i < 10)
	{
		printf("%d", t[i++]);
	}
}*/
