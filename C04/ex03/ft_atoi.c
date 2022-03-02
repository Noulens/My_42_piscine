/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:08:55 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 14:25:40 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITESPACE "\t\n\v\f\r "

int	ft_isaspace(char *str, int i)
{
	int	j;

	j = 0;
	while (WHITESPACE[j])
	{
		if (str[i] == WHITESPACE[j])
			return (1);
		++j;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (ft_isaspace(str, i) == 1)
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		++i;
	}
	return (sign * result);
}

/*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char str[] = {"\n   \v   \f  \r \t 2147483648frfrfrfrfr564"};
	//char str[] = {""};
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}*/
