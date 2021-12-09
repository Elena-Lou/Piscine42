/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:26:39 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 20:26:46 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_free(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			free(board[j]);
			j++;
		}
		i++;
	}
	free(board);
	return (0);
}

int	ft_free_permut(int **tab_permut)
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 4)
		{
			free(tab_permut[j]);
			j++;
		}
		i++;
	}
	free(tab_permut);
	return (0);
}
