/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:50:12 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/09 12:01:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);


int	main(void)
{
char s1a[] = "";
char s2a[] = "";
char s1b[] = "";
char s2b[] = "";
char s3a[] = "Same";
char s4a[] = "";
char s3b[] = "Same";
char s4b[] = "";
char s5a[] = "ShortTer";
char s6a[] = "T";
char s5b[] = "ShortTer";
char s6b[] = "T";

printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "S" : "F");
printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "S" : "F");
printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "S" : "F");
}*/
