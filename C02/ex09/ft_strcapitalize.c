/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:57:49 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/07 21:10:10 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}
	i = -1;
	while (str[++i] != '\0')
	{
		if (flag == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (flag == 1 && str[i] >= 48 && str[i] <= 57)
			flag = 0;
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 97) || str[i] > 122)
			flag = 1;
	}
	return (str);
}

/*#include <stdio.h>

int    main(void)
{
    char    str[] = {""};
    int        i;

    i = 0;
    ft_strcapitalize(str);
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        ++i;
    }
    return (0);
}*/
