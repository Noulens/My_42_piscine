/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:15:51 by tnoulens          #+#    #+#             */
/*   Updated: 2022/02/14 19:32:28 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_peek_rooms(int *str)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = str[i] + 48;
		write(1, &c, 1);
		++i;
	}
	write(1, "\n", 1);
}

int	ft_queen_is_cozy(int *board, int column)
{
	int	i;

	if (column == 0)
		return (1);
	i = 0;
	while (i < column)
	{
		if (board[i] == board[column])
			return (0);
		if (board[i] == board[column] - column + i)
			return (0);
		if (board[i] == board[column] + column - i)
			return (0);
		++i;
	}
	return (1);
}

void	ft_place_queens(int *board, int column, int *solutions)
{
	int	room;

	room = 0;
	while (room < 10)
	{
		board[column] = room;
		if (ft_queen_is_cozy(board, column) == 1)
		{
			if (column == 9)
			{
				ft_peek_rooms(board);
				*solutions = *solutions + 1;
			}	
			else
				ft_place_queens(board, column + 1, solutions);
		}
		++room;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solutions;
	int	*p;

	solutions = 0;
	p = &solutions;
	ft_place_queens(board, 0, p);
	return (*p);
	write(1, "\n", 1);
}

#include <stdio.h>

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}