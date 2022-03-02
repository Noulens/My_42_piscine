/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:07:52 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/06 21:24:48 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0' && i < size - 1)
		{
			*(dest + i) = *(src + i);
			++i;
		}
		*(dest + i) = '\0';
	}
	if (i < size || size == 0)
	{
		while (*(src + i) != '\0')
		{
			++i;
		}
	}
	return (i);
}

/*#include <stdio.h>

int main()
{
int c;
char dest[23];

c = ft_strlcpy(dest, "ceci est un string0", 19);
printf("Copied '%s' into '%s', size of src:%d", "ceci est un string0", dest, c);
return (0);
}*/
