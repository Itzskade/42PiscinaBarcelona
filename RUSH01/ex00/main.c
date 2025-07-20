#include <stdlib.h>
#include <unistd.h>
#include "skyscraper.h"

int     parse_input(char *str, int *clues)
{
    int     i;
    int     value;

    i = 0;
    while (*str)
    {
        while (*str == ' ')
            str++;
        if (*str >= '1' && *str <= '4')
        {
            value = *str - '0';
            clues[i++] = value;
            str++;
        }
        else if (*str != '\0')
            return (0);
    }
    if (i != 16)
        return (0);
    return (1);
}

int     main(int argc, char **argv)
{
    int     clue[16];
    int     **grid;

    if (argc != 2 || !parse_input(argv[1], clue))
        return (write_error(), 1);
    if (!init_grid(&grid))
        return (1);
    if (solve(grid, 0, 0, clue))
        print_grid(grid);
    else
        write_error();
    free_grid(grid, 4);
    return (0);
}
