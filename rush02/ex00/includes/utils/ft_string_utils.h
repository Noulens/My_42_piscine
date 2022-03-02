/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:39:41 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:41:41 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_UTILS_H
# define FT_STRING_UTILS_H

int		ft_strlen(char *str);
char	*ft_trimmed(char *to_trim);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

#endif
