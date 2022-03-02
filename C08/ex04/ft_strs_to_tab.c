/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:16:53 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/22 10:25:29 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		lght;
	int		i;
	char	*p;

	lght = 0;
	while (*(src + lght))
		++lght;
	p = (char *)malloc(lght + 1);
	if (p == 0)
		return (NULL);
	i = 0;
	while (i < lght)
	{
		p[i] = src[i];
		++i;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			sof;
	t_stock_str	*tab;

	sof = sizeof(t_stock_str);
	tab = (t_stock_str *)malloc(sof * (ac + 2));
	if (tab == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		++i;
	}
	tab[i].str = NULL;
	return (tab);
}
