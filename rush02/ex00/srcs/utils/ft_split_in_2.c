/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_in_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:23:23 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/20 20:43:31 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_split_in_2.h"
#include "ft_string_utils.h"

char	**ft_split_in_2(char *str, char *charset)
{
	char	**spltd;
	int		lcharset;

	lcharset = ft_strlen(charset);
	spltd = (char **)malloc(sizeof(char *) * 3);
	if (spltd == NULL)
		return (0);
	spltd[0] = ft_strdup_sep(str, charset, lcharset);
	spltd[1] = ft_strdup(str + ft_strlen(spltd[0]) + 1);
	spltd[2] = 0;
	return (spltd);
}

char	*ft_strdup_sep(char *src, char *charset, int lcharset)
{
	int		lght;
	int		i;
	char	*p;

	lght = 0;
	while (*(src + lght) && ft_is_sep(*(src + lght), charset, lcharset) != -1)
		++lght;
	p = (char *)malloc(lght + 1);
	if (p == 0)
		return (NULL);
	i = 0;
	while (i < lght)
	{
		*(p + i) = *(src + i);
		++i;
	}
	*(p + i) = '\0';
	return (p);
}

int	ft_is_sep(char c, char *charset, int lcharset)
{
	int	i;

	i = 0;
	while (i < lcharset)
	{
		if (c == charset[i])
			return (-1);
		++i;
	}
	return (1);
}
