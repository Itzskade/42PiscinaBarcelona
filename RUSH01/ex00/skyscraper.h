#ifndef  SKYSCRAPER_H
#define  SKYSCRAPER_H

/* utils.c */
void    ft_putchar(char c);
void    write_error(void);

/*grid.c*/
int     init_grid(int ***grid);
void    print_grid(int **grid);
void    free_grid(int **grid, int limit);

/* main.c */
int     read_clues(char *str, int *clues);

/* check.c */
int     check_row_left(int **grid, int *clues);
int     check_row_right(int **grid, int *clues);
int     check_col_up(int **grid, int *clues);
int     check_col_down(int **grid, int *clues);
int     check_views(int **grid, int *clues);

/* solver.c */
int     count_visible(int *line);
int     validate_line(int *line, int clue);
int     is_valid_grid(int **grid, int *clues);
int     is_safe(int **grid, int row, int col, int num);
int     solve(int **grid, int row, int col, int *clues);

#endif
