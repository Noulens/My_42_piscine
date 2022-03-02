/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:57:11 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/07 15:38:12 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s2;
		++s1;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*#include <stdio.h>

int	main(void)
{
	char s1[] = {"CompA"};
	char s2[] = {"Compa"};

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
