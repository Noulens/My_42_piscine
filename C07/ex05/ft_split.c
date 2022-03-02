/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:23:23 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/22 16:26:17 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		++i;
	return (i);
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

int	ft_count_word(char *str, char *charset, int lcharset)
{
	int		word_flag;
	int		i;
	int		word_count;

	i = 0;
	word_flag = 0;
	word_count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset, lcharset) == -1)
		{
			word_flag = 0;
			++i;
		}
		else if (word_flag == 1)
			++i;
		else
		{
			word_flag = 1;
			++word_count;
			++i;
		}
	}
	return (word_count);
}

char	*ft_strdup(char *src, char *charset, int lcharset)
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

char	**ft_split(char *str, char *charset)
{
	char	**spltd;
	int		nbwords;
	int		i;
	int		j;
	int		lcharset;

	lcharset = ft_strlen(charset);
	nbwords = ft_count_word(str, charset, lcharset);
	spltd = (char **)malloc(sizeof(char *) * nbwords + 1);
	if (spltd == NULL)
		return (0);
	i = 0;
	j = 0;
	while (i < nbwords)
	{
		while (ft_is_sep(str[j], charset, lcharset) == -1)
			++j;
		spltd[i] = ft_strdup(str + j, charset, lcharset);
		j = j + ft_strlen(spltd[i]);
		++i;
	}
	spltd[i] = '\0';
	return (spltd);
}

/*#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	tab = ft_split("Ceci&est$un####################succes@!", "&$#@");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "CUT");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", "");
	printf("OK\n");
	tab = ft_split("", "CUT");
	printf("OK\n");
	tab = ft_split("       ", "       ");
	printf("OK\n");
	tab = ft_split("         ", "       ");
	printf("OK\n");
}*/