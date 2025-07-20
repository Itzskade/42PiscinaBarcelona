/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:31:46 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/20 13:31:49 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

/* utils.c */
void	write_error(void);
void	ft_putchar(char c);
/* grid.c */
void	print_grid(int **grid);
void	free_grid(int **grid, int limit);
int		init_grid(int ***grid);
/* main.c */
int		parse_input(char *str, int *clues);
/* check.c */
int		check_views(int **grid, int *clues);
int		check_col_up(int **grid, int *clues);
int		check_col_down(int **grid, int *clues);
int		check_row_left(int **grid, int *clues);
int		check_row_right(int **grid, int *clues);
/* solver.c */
int		count_visible(int *line);
int		validate_line(int *line, int clue);
int		is_valid_grid(int **grid, int *clues);
int		is_safe(int **grid, int row, int col, int num);
int		solve(int **grid, int row, int col, int *clues);

#endif
