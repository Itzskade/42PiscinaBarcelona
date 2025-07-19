/*Algoritmo de resolución*/

// 1. Función auxiliar base
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

// 2. Lógica de validación general
int	check_views(int **grid, int *clues)
{
	if (!check_row_left(grid, clues))
		return 0;
	if (!check_row_right(grid, clues))
		return 0;
	if (!check_col_up(grid, clues))
		return 0;
	if (!check_col_down(grid, clues))
		return 0;
	return 1;
}

// 3. Verifica si el tablero está completo y cumple las pistas
int	is_valid_grid(int **grid, int *clues)
{
	int	row;
	int	col;
	
	row = 0; 
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (grid[row][col] == 0)
				return 0;
			col++;
		}
		row++;
	}
	return check_views(grid, clues);
}

// 4. Verifica si se puede colocar un número sin repetir en fila o columna
int	is_safe(int **grid, int row, int col, int num)
{
	int	i; 
	
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return 0;
		i++;
	}
	return 1;
}

// 5. Algoritmo de resolución con backtracking
int	solve(int **grid, int row, int col, int *clues)
{
	int num;
	if (row == 4)
		return is_valid_grid(grid, clues);
	if (col == 4)
		return solve(grid, row + 1, 0, clues);
	num = 1;
	while (num <= 4)
	{
		if (is_safe(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, clues))
				return 1;
			grid[row][col] = 0;
		}
		num++;
	}
	return 0;
}
