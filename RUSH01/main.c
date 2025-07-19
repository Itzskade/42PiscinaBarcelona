#include <stdlib.h>
#include <unistd.h>
#include "skyscraper.h"

int	parse_input(char *str, int *clues)
{
	int	i;
	int	value;

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str >= '1' && *str <= '4')
		{
			value = *str - '0';
			clues[i] = value;
			i++;
			str++;
		}
		else if (*str != '\0')
		{
			return 0;
		}
	}
	if (i != 16)
		return 0;
	return 1;
}

int	main(int argc, char **argv)
{
	int	clue[16];
	int	**grid;
	int	i;

	if (argc != 2 || !parse_input(argv[1], clue))
	{
		write_error();
		return 1;
	}
	grid = malloc(4 * sizeof(int *));
	if (!grid)
	{
		write_error();
		return 1;
	}
	i = 0;
	while (i < 4)
	{
		grid[i] = malloc(4 * sizeof(int));
		if (!grid[i])
		{
			write_error();
			return 1;
		}
		i++;
	}
	init_grid(grid);
	if (solve(grid, 0, 0, clue))
	{
		print_grid(grid);
		write(1, "Puzzle completed\n", 17);
	}
	else
		write_error();
	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return 0;
}
