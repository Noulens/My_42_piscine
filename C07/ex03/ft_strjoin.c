/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:17:08 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/21 16:45:12 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strl(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	ft_size(char **str, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			++j;
			++k;
		}
		++i;
	}
	return (k);
}

void	ft_supercat(char *dest, char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			dest[k++] = str[i][j++];
		}
		if (i < size - 1)
		{
			l = 0;
			while (sep[l])
			{
				dest[k++] = sep[l++];
			}
		}
		++i;
	}
	dest[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sct;
	int		total;
	int		len_sep;

	if (size == 0)
	{
		sct = (char *)malloc(sizeof(char));
		sct[0] = 0;
		return (sct);
	}
	total = ft_size(strs, size);
	len_sep = ft_strl(sep);
	sct = (char *)malloc(total + (size - 1) * len_sep + 1);
	ft_supercat(sct, strs, sep, size);
	return (sct);
}
