/*
Direction	    Index in clues[]
Up		        0  to 3
Down		    4  to 7
Left	        8  to 11
Right		    12 to 15
*/

#include "skyscraper.h"
#include <unistd.h>

int count_visible(int *line);

int check_row_left(int **grid, int *clues)
{
    int row = 0, col, visible;
    int line[4];

    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            line[col] = grid[row][col];
            col++;
        }
        visible = count_visible(line);
        if (visible != clues[8 + row])
        {
            write_error();
            return 0;
        }
        row++;
    }
    return 1;
}

int check_row_right(int **grid, int *clues)
{
    int row = 0, col, visible;
    int line[4];

    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            line[col] = grid[row][3 - col];
            col++;
        }
        visible = count_visible(line);
        if (visible != clues[12 + row])
        {
            write_error();
            return 0;
        }
        row++;
    }
    return 1;
}

int check_col_up(int **grid, int *clues)
{
    int col = 0, row, visible;
    int line[4];

    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            line[row] = grid[row][col];
            row++;
        }
        visible = count_visible(line);
        if (visible != clues[col])
        {
            write_error();
            return 0;
        }
        col++;
    }
    return 1;
}

int check_col_down(int **grid, int *clues)
{
    int col = 0, row, visible;
    int line[4];

    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            line[row] = grid[3 - row][col];
            row++;
        }
        visible = count_visible(line);
        if (visible != clues[4 + col])
        {
            write_error();
            return 0;
        }
        col++;
    }
    return 1;
}
