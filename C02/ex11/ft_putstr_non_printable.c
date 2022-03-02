/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:55:02 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/06 16:45:13 by tnoulens         ###   ########.fr       */
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

	ft_putchar('\\');
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

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) > 126)
			ft_puthex(*(str + i));
		else
			ft_putchar(*(str + i));
		++i;
	}
}

/*int	main(void)
{
	char	str[] = {"Coucou\ntu vas bien ? \t \r \u241D \f \t \v \b the end"};

	ft_putstr_non_printable(str);
	return (0);
}*/
