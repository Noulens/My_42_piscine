/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:31:20 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/09 13:07:13 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	lenght;
	int	i;

	i = 0;
	lenght = 0;
	while (dest[lenght] != 0)
		++lenght;
	while (src[i] && nb)
	{
		dest[lenght] = src[i];
		++i;
		++lenght;
		--nb;
	}
	dest[lenght] = 0;
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[] = {"I've seen things you people wouldn't believe..."};
	char src[] = {"WWW"};

	printf("%s", ft_strncat(dest, src, 4));
	return (0);
}*/
