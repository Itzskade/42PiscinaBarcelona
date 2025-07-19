#ifndef  SKYSCRAPER_H
#define  SKYSCRAPER_H

/* utils.c */
void    ft_putchar(char c);
void    print_grid(int **grid);
void    write_error(void);
void    init_grid(int **grid);

/* main.c */
int     parse_input(char *str, int *clues);

/* check.c */
int     check_row_left(int **grid, int *clues);
int     check_row_right(int **grid, int *clues);
int     check_col_up(int **grid, int *clues);
int     check_col_down(int **grid, int *clues);

/* solver.c */
int     count_visible(int line[4]);
int     check_views(int **grid, int *clues);
int     is_valid_grid(int **grid, int *clues);
int     is_safe(int **grid, int row, int col, int num);
int     solve(int **grid, int row, int col, int *clues);

#endif
