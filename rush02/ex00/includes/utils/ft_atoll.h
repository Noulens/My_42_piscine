/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:04:44 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:56:48 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOLL_H
# define FT_ATOLL_H

# define WHITESPACE "\t\n\v\f\r "

long long	ft_atoll(char *str);
int			ft_isaspace(char *str, int i);

#endif
