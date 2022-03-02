/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:41:52 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/05 22:00:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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
	char	str[] = {"echaine1ABCVEUQZ"};

	printf("%d", ft_str_is_alpha(str));
}*/
