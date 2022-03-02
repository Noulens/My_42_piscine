/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:09:11 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/06 11:26:00 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
	char	str[] = {"echaine"};

	printf("%d", ft_str_is_lowercase(str));
}*/
