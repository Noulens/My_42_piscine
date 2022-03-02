/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:19:02 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/07 13:01:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (*str <= 126 && *str >= 32)
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
	char	str[] = {"echainesdVEVDDV000)(*&^%$#@!]' ufiouhvw6&6^-+\n\t\r\f\t\v\b"};

	printf("%d", ft_str_is_printable(str));
}*/
