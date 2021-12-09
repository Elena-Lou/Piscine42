/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:58:20 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/15 21:26:14 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

int	main(int argc, char **argv)
{
	int	size;
	int	**tab_check;
	int	**tab_permut;
	int	**board;

	size = ft_strlen(argv[1]);
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (size != 31)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
		arg_check(argv[1]);
	board = ft_create_board();
	tab_check = ft_fill_check(argv[1]);
	tab_permut = make_permut();
	solve_backtrack(board, tab_permut, 0, tab_check);
}
