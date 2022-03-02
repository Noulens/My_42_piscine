/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:58:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*(str + lenght))
		++lenght;
	return (lenght);
}

int	ft_checkerror(char *base)
{
	int		j;
	int		i;
	int		error;
	int		k;

	j = 0;
	i = 0;
	error = 0;
	j = ft_strlen(base);
	if (j < 2)
		error = 1;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			error = 1;
		k = i;
		while (k < j)
		{
			if (base[k + 1] == base[i])
				error = 1;
			++k;
		}
		++i;
	}
	return (error);
}

long	ft_intmin(int nbr)
{
	nbr = (long)nbr;
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	nblong;

	nblong = nbr;
	if (ft_checkerror(base) == 1)
		return ;
	l = ft_strlen(base);
	if (nbr == -2147483648)
		nblong = ft_intmin(nbr);
	if (nblong < 0)
	{
		write(1, "-", 1);
		nblong *= -1;
	}
	if (nblong >= l)
		ft_putnbr_base(nblong / l, base);
	write(1, &base[nblong % l], 1);
}

/*int	main(void)
{
	char	base[] = "0123456789abcdef";

	ft_putnbr_base(-2147483648, base);
	return (0);
}*/
