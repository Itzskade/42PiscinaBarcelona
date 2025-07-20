#include "skyscraper.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_grid(int **grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

void    print_grid(int **grid)
{
	int	row;
	int	col;

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

int validate_line(int *line, int clue)
{
    int i;
    int count;

    i = 0;
    while (i < 4)
    {
        if (line[i] == 0)
            return (1);
        i++;
    }
    if (clue == 0)	
        return (1);
    count = count_visible(line);
    return (count == clue);
}

void	write_error(void)
{
	write(1, "Error\n", 6);
}
