/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:26:27 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/05 20:06:40 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char src[] = {"All those moment will be lost in time,..."};
	char dest[] = {"okay!"};

	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
