/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:31:15 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 20:40:09 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_left(int **tab_check, int **tab_permut, int index_line)
{
	int	i;
	int	count;
	int	max;

	max = 0;
	count = 1;
	i = 1;
	max = tab_permut[index_line][0];
	while (i < 4)
	{
		if (max < tab_permut[index_line][i])
		{
			max = tab_permut[index_line][i];
			count++;
		}
		i++;
	}
	if (tab_check[3][index_line] == count)
		return (1);
	else
		return (0);
}

int	check_right(int **tab_check, int **tab_permut, int index_line)
{
	int	i;
	int	count;
	int	max;

	max = 0;
	count = 1;
	i = 4;
	max = tab_permut[index_line][3];
	while (i > 0)
	{
		if (max < tab_permut[index_line][i])
		{
			max = tab_permut[index_line][i];
			count++;
		}
		i--;
	}
	if (tab_check[4][index_line] == count)
		return (1);
	else
		return (0);
}

int	check_col_up(int **tab_check, int **tab_permut, int index_col)
{
	int	i;
	int	count;
	int	max;

	max = 0;
	count = 1;
	i = 3;
	max = tab_permut[i][index_col];
	while (i > 0)
	{
		if (max < tab_permut[i][index_col])
		{
			max = tab_permut[i][index_col];
			count++;
		}
		i--;
	}
	if (tab_check[1][index_col] == count)
		return (1);
	else
		return (0);
}

int	check_col_down(int **tab_check, int **tab_permut, int index_col)
{
	int	i;
	int	count;
	int	max;

	max = 0;
	count = 1;
	i = 0;
	max = tab_permut[i][index_col];
	while (i < 4)
	{
		if (max < tab_permut[i][index_col])
		{
			max = tab_permut[i][index_col];
			count++;
		}
		i++;
	}
	if (tab_check[2][index_col] == count)
		return (1);
	else
		return (0);
}
