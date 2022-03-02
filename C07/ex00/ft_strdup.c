/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:27:54 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/15 14:23:53 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*p;

	length = 0;
	while (*(src + length))
		++length;
	p = (char *)malloc(length + 1);
	if (p == 0)
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		*(p + i) = *(src + i);
		++i;
	}
	*(p + i) = '\0';
	return (p);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	src[] = "ok, ok, ok...\0 SURPRISE MADAFACKA!";
	char	src[] = "";

	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}*/