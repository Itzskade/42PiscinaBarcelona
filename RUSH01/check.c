/*
Direction	    Index in clues[]
Up		        0  to 3
Down		    4  to 7
Left	        8  to 11
Right		    12 to 15
*/

#include "skyscraper.h"
#include <unistd.h>

int    count_visible(int *line);
int    validate_line(int *line, int clue);

int    check_row_left(int **grid, int *clues)
{
    int row;
    int col;
    int line[4];

    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            line[col] = grid[row][col];
            col++;
        }
        if (!validate_line(line, clues[8 + row]))
            return (0);
        row++;
    }
    return (1);
}

int check_row_right(int **grid, int *clues)
{
    int row;
    int col;
    int line[4];

    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            line[col] = grid[row][3 - col];
            col++;
        }
        if (!validate_line(line, clues[12 + row]))
            return (0);
        row++;
    }
    return (1);
}

int check_col_up(int **grid, int *clues)
{
    int col;
    int row;
    int line[4];

    col = 0;
    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            line[row] = grid[row][col];
            row++;
        }
        if (!validate_line(line, clues[col]))
            return (0);
        col++;
    }
    return (1);
}

int    check_col_down(int **grid, int *clues)
{
    int col;
    int row;
    int line[4];

    col = 0;
    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            line[row] = grid[3 - row][col];
            row++;
        }
        if (!validate_line(line, clues[4 + col]))
            return (0);
        col++;
    }
    return (1);
}

int    check_views(int **grid, int *clues)
{
    if (!check_row_left(grid, clues))
        return (0);
    if (!check_row_right(grid, clues))
        return (0);
    if (!check_col_up(grid, clues))
        return (0);
    if (!check_col_down(grid, clues))
        return (0);
    return (1);
}
