/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:24:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/06 13:37:37 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = {"Ceci est une chaine en minuscule"};

	printf("%s", ft_strupcase(str));
	return (0);
}*/
