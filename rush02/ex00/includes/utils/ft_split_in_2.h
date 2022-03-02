/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_in_2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:06:35 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 04:21:53 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_IN_2_H
# define FT_SPLIT_IN_2_H

char	**ft_split_in_2(char *str, char *charset);
char	*ft_strdup_sep(char *src, char *charset, int lcharset);
int		ft_is_sep(char c, char *charset, int lcharset);

#endif
