#include <stdlib.h>
#include <unistd.h>
#include "skyscraper.h"

int	parse_input(char *str, int *clues)
{
    int i;
    int val;

    i = 0;
    while (*str)
    {
        while (*str == ' ')
            str++;
        if (*str >= '1' && *str <= '4')
        {
            val = *str - '0';
            clues[i++] = val;
            str++;
        }
        else if (*str != '\0')
            return (0);
    }
    return (i == 16);
}

int	init_matrix(int ***grid)
{
    int i;
    int j;

    *grid = malloc(4 * sizeof(int *));
    if (!*grid)
        return (write_error(), 0);
    i = -1;
    while (++i < 4)
    {
        (*grid)[i] = malloc(4 * sizeof(int));
        if (!(*grid)[i])
            break ;
        j = -1;
        while (++j < 4)
            (*grid)[i][j] = 0;
    }
    if (i != 4)
        return (free_matrix(*grid, i), 0);
    return (1);
}

void    free_matrix(int **grid, int limit)
{
    while (--limit >= 0)
        free(grid[limit]);
    free(grid);
}

int	main(int argc, char **argv)
{
    int clue[16];
    int **grid;

    if (argc != 2 || !parse_input(argv[1], clue))
        return (write_error(), 1);
    if (!init_matrix(&grid))
        return (1);
    if (solve(grid, 0, 0, clue))
    {
        print_grid(grid);
        write(1, "Puzzle completed\n", 17);
    }
    else
        write_error();
    free_matrix(grid, 4);
    return (0);
}
