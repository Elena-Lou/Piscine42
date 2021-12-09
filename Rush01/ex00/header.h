#ifndef	HEADER
# define HEADER

void permute(char *a, int l, int r, int **tab);
int	**ft_create_board(void);
void	ft_print_solve(char **tab);
int	check_left(int *tab_left, int **tab_permut, int index_line);
int	check_right(int *tab_right, int **tab_permut, int index_line);
int check_col_up(int *tab_up, int **tab_permut, int index_col);
int check_col_down(int *tab_down, int **tab_permut, int index_col);
int	solve_backtrack(int **board, int **tab_permut);
int	ft_solve(int **board, int **tab_permut);

# endif
