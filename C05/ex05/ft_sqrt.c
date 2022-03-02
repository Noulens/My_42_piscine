/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:58:27 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/14 12:27:27 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		start;
	int		end;
	int		mid;
	long	sqrt;

	end = 46340;
	start = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			sqrt = mid;
		if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	long	i;

	i = 0;
	while (i <= 23)
	{
		printf("%ld: %d\n",i ,  ft_sqrt(i));
		++i;
	}
	return (0);
}*/