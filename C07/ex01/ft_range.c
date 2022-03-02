/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:50:21 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/15 14:50:23 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	range;
	int	i;

	if (min < max)
		range = max - min;
	else if (min >= max)
	{
		p = NULL;
		return (p);
	}
	p = (int *)malloc(range * sizeof(int));
	i = 0;
	while (i < range)
	{
		p[i] = min;
		++min;
		++i;
	}
	return (p);
}

/*#include <stdio.h>

int	main(void)
{
	int	*p;
	int	i;
	int	min = -3;
	int	max = -3;

	i = 0;
	p = ft_range(min, max);
	while (i < 6)
	{
		printf("%d", p[i]);
		++i;
	}
}*/