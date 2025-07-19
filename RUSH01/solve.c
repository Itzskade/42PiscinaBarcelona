/*Algoritmo de resolución*/

int	solve(int grid [4][4], int row, int col,  int clues[16])
{

}

int	is_safe(int grid[4][4], int row, int col, int num)
{

}

int	is_valid_grid(int grid[4][4], int clues[16])	
{

}

int	count_visible (int line[4])
{
	int	i;
    	int	max_height;
	int	visible;

	i = 0;
	max_height = 0;
	visible = 0;
	while (i < 4)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	check_views(int grid[4][4], int clues[16])
{

}
