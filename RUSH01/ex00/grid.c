#include <stdlib.h>
#include <unistd.h>
#include "skyscraper.h"

int     init_grid(int ***grid)
{
    int     row;
    int     col;

    *grid = malloc(4 * sizeof(int *));
    if (!*grid)
        return (write_error(), 0);
    row = -1;
    while (++row < 4)
    {
        (*grid)[row] = malloc(4 * sizeof(int));
        if (!(*grid)[row])
            break ;
        col = -1;
        while (++col < 4)
            (*grid)[row][col] = 0;
    }
    if (row != 4)
    {    
        free_grid(*grid, row);
        return (0); 
    }
    return (1);
}

void    print_grid(int **grid)
{
	int	    row;
	int	    col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
        	{	
        		ft_putchar(grid[row][col] + '0');
        		if (col < 3)
        			ft_putchar(' ');
        		col++;
        	}
        	ft_putchar('\n');
        	row++;
        }
}

void    free_grid(int **grid, int limit)
{
    while (--limit >= 0)
        free(grid[limit]);
    free(grid);
}