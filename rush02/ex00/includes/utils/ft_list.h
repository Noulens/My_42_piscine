/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:19:37 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/02/20 20:41:02 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list	t_list;
struct s_list {
	struct s_list	*next;
	char			*data;
};

t_list	*ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);
int		ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_data)(void *));
char	**ft_strs_from_str_list(t_list *lines_list);

#endif
