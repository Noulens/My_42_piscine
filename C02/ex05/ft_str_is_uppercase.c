/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:03:14 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/06 13:22:57 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
	char	str[] = {""};

	printf("%d", ft_str_is_uppercase(str));
}*/
