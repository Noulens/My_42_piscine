/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:47:28 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/02 20:36:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int ten0, int digit0, int ten1, int digit1)
{
	write(1, &ten0, 1);
	write(1, &digit0, 1);
	write(1, " ", 1);
	write(1, &ten1, 1);
	write(1, &digit1, 1);
	if (ten0 != 57 || digit0 != 56)
		write(1, ", ", 2);
}

int	ft_lowestvalue(int digit_b, int digit_a)
{
	if (digit_b == 58)
		digit_b = 47;
	else
		digit_b = digit_a;
	return (digit_b);
}

void	ft_print_comb2(void)
{
	int	t_a;
	int	d_a;
	int	t_b;
	int	d_b;

	t_a = 47;
	while (++t_a < 58)
	{
		d_a = 47;
		while (++d_a < 58)
		{
			t_b = t_a - 1;
			d_b = 48;
			while (++t_b < 58)
			{
				d_b = ft_lowestvalue(d_b, d_a);
				while (++d_b < 58)
				{
					ft_print_digits(t_a, d_a, t_b, d_b);
				}
			}
		}
	}
}
