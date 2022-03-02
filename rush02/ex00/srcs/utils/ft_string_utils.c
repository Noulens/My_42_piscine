/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:36:46 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:42:58 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string_utils.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0 && str[i] != ' ')
		++i;
	return (i);
}

char	*ft_trimmed(char *to_trim)
{
	int		i;

	i = 0;
	while (to_trim[i] == ' ')
		++i;
	return (ft_strdup(to_trim + i));
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] += '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		lght;
	int		i;
	char	*p;

	lght = 0;
	while (*(src + lght))
		++lght;
	p = (char *) malloc(lght + 1);
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
