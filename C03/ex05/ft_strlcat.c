/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:18:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/16 11:18:14 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*des;
	char			*sc;
	unsigned int	n;
	unsigned int	dest_len;

	des = dest;
	sc = src;
	n = size;
	while (n-- != 0 && *des != '\0')
		des++;
	dest_len = des - dest;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(sc));
	while (*sc != '\0')
	{
		if (n != 1)
		{
			*des++ = *sc;
			n--;
		}
		sc++;
	}
	*des = '\0';
	return (dest_len + (sc - src));
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src1[] = "Iestmo.i8";
	char	src2[] = "Iestmo.i8";
	char	dest1[9] = "coucou..";
	char	dest2[9] = "coucou..";

	printf("sa fonction : %u\n", ft_strlcat(dest1, src1, 10));
	printf("la vrai fonction : %lu\n", strlcat(dest2, src2, 10));
	printf("sa fonction : %s\n", dest1);
	printf("la vrai fonction : %s\n", dest2);
	return (0);
}*/
