/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:41:39 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/08 22:36:38 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = {"I have seen things you people wouldn't believe,..."};
	char	s2[] = {"I have seen things"};

	printf("%d", ft_strncmp(s1, s2, 19));
	return (0);
}*/
