/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:18:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/08 11:48:56 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght;

	lenght = 0;
	i = 0;
	while (*(dest + lenght) != '\0')
		++lenght;
	while (*(src + i) != '\0')
	{
		dest[lenght + i] = src[i];
		++i;
	}
	dest[lenght + i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[] = {"I've seen things you people wouldn't believe..."};
	char src[100] = {"Attack ships on fire off the shoulder of Orion..."};

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
