/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:29:17 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 20:29:24 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	**ft_create_board(void)
{
	int	**board;
	int	i;

	i = 0;
	board = malloc(sizeof(int *) * 4);
	if (board == NULL)
		return (0);
	while (i < 4)
	{
		board[i] = malloc(sizeof(int) * 4);
		if (board[i] == NULL)
			return (0);
		i++;
	}
	return (board);
}
