/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:54:46 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/07 14:51:47 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	left_hex;
	char	right_hex;
	int		temp;

	if (c < 0)
	{
		temp = (-128 - c) * -1 + 128;
		left_hex = temp / 16;
		right_hex = temp % 16;
	}
	else
	{
		left_hex = c / 16;
		right_hex = c % 16;
	}
	if (left_hex < 10)
		ft_putchar(left_hex + 48);
	else
		ft_putchar(left_hex + 87);
	if (right_hex < 10)
		ft_putchar(right_hex + 48);
	else
		ft_putchar(right_hex + 87);
}

void	ft_print_addr(void *addr)
{
	int				i;
	unsigned long	addr_in_decimal;
	char			addr_digit[16];

	addr_in_decimal = (unsigned long)addr;
	i = -1;
	while (addr_in_decimal)
	{
		addr_digit[++i] = addr_in_decimal % 16;
		if (addr_digit[i] < 10)
			addr_digit[i] += 48;
		else
			addr_digit[i] += 87;
		addr_in_decimal /= 16;
	}
	if (i < 15)
	{
		while (++i <= 15)
		{
			addr_digit[i] = 48;
		}
	}
	while (--i >= 0)
		ft_putchar(addr_digit[i]);
}

void	ft_print_the_rofl(char *addr, int nb_to_print)
{
	int	i;

	i = -1;
	while (++i < nb_to_print)
	{
		ft_puthex(addr[i]);
		write(1, " ", i % 2);
	}
	while (16 - i > 0)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		write(1, " ", i % 2);
		++i;
	}
	i = -1;
	while (++i < nb_to_print)
	{
		if (addr[i] < 32 || addr[i] > 126)
			ft_putchar('.');
		else
			ft_putchar(addr[i]);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	number_to_print;
	int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size > 16)
		{
			size -= 16;
			number_to_print = 16;
		}
		else
		{
			number_to_print = size;
			size = 0;
		}
		ft_print_addr(addr + offset);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_the_rofl(offset + addr, number_to_print);
		ft_putchar('\n');
		offset += 16;
	}
	return (addr);
}

/*int	main(void)
{
	char	str[] = { -10, -125, 0, 65, 67, -11 };

	ft_print_memory(str, 6);
	return (0);
}*/
