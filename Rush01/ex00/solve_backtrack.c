/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_backtrack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:26:23 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 21:28:25 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

int	solve_backtrack(int **board, int **permut,
		int line, int **check)
{
	int	i;

	i = 0;
	if (line == 4)
	{
		ft_print_solve(board);
		ft_free_permut(permut);
		ft_free(board);
		ft_free(check);
		return (0);
	}
	if (board[line] != 0)
		return (solve_backtrack(board, permut, line + 1, check));
	while (line < 4)
	{
		while (i < 24)
		{
			if (check_left(check, permut, line)
				&& check_right(check, permut, line))
			{
				board[line] = permut[i];
				if (solve_backtrack(board, permut, line + 1, check))
				{
					if (check_col_up(check, permut, line)
						&& check_col_down(check, permut, line))
						return (1);
				}
			}
			i++;
		}
		board[line] = 0;
	}
	return (0);
}
