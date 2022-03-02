/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:04:05 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/05 22:08:35 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			++str;
		else
		{
			is_alpha = 0;
			break ;
		}
	}
	return (is_alpha);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = {"1012369874200125887742588820000222996363201"};

	printf("%d", ft_str_is_numeric(str));
}*/
