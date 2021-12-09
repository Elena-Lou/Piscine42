/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:25:09 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 21:13:40 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
void	permute(char *a, int l, int r, int **tab);
int		**ft_create_board(void);
void	ft_print_solve(int **tab);
int		check_left(int **tab_check, int **tab_permut, int index_line);
int		check_right(int **tab_check, int **tab_permut, int index_line);
int		check_col_up(int **tab_check, int **tab_permut, int index_col);
int		check_col_down(int **tab_check, int **tab_permut, int index_col);
int		solve_backtrack(int **board, int **permut, int line, int **check);
int		ft_solve(int **board, int **tab_permut);
int		ft_free(int **board);
int		ft_free_permut(int **tab_permut);
int		arg_check(char *str);
int		main(int argc, char **argv);
int		ft_strlen(char *str);
int		**ft_fill_check(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		**make_permut(void);

#endif
