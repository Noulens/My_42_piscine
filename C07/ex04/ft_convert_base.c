/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:44:11 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/20 22:16:25 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *nbr_base, int l);

int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_checkerror(char *base);

int		ft_in_base(char c, char *base, int l);

int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	ft_rev_int_tab(char *tab, int size);

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
	int		k;

	j = 0;
	i = 0;
	j = ft_strlen(base);
	if (j < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
		k = i;
		while (k < j)
		{
			if (base[k + 1] == base[i])
				return (1);
			++k;
		}
		++i;
	}
	return (0);
}

int	ft_in_base(char c, char *base, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		if (c == base[i])
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		l;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	l = ft_strlen(base);
	result = 0;
	while (ft_in_base(str[i], base, l) != -1 && str[i] != 0)
	{
		result = result * l + ft_in_base(str[i], base, l);
		i++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbr_base;
	int		l;

	l = ft_strlen(base_to);
	nbr_base = (char *)malloc(100);
	if (ft_checkerror(base_from) == 1 || ft_checkerror(base_to) == 1)
		return (NULL);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, nbr_base, l);
	return (nbr_base);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "   -";

	printf("%s", ft_convert_base(str, "0123456789abcdef", "0123456789"));
}*/
