/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:35:33 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/10 19:41:20 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p)
		write(1, p++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s2;
		++s1;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sorted(int nb, char **str)
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	while (i < nb)
	{
		j = i;
		while (j > 0 && ft_strcmp(str[j - 1], str[j]) > 0)
		{
			p = str[j - 1];
			str[j - 1] = str[j];
			str[j] = p;
			--j;
		}
		++i;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sorted(argc - 1, argv + 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
