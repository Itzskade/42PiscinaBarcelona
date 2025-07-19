// Verifica visibilidad según pistas
/*

Dirección	Índices en clues[]
Arriba		    0  a 3
Abajo		    4  a 7
Izquierda	    8  a 11
Derecha		    12 a 15
*/

int check_row_left(int grid[4][4], int clues[16])
{
	int	row;
	int	line[4];
	int	visible;

	row = 0;
	while (row < 4)
    	{
    		line[0] = grid[row][0];
    		line[1] = grid[row][1];	
    		line[2] = grid[row][2];
    		line[3] = grid[row][3];
    		visible = count_visible(line);
    		if (visible != clues[8 + row])
    		{
    			write(1, "Error\n", 6);
    			return (0);
    		}
    		row++;
	}
	return (1);
}

int	check_row_right(int grid[4][4], int clues[16])
{
	int	row;
	int	line[4];
	int	visible;
	
	row = 0;
	while (row < 4)
	{
		line[0] = grid[row][3];
		line[1] = grid[row][2];
		line[2] = grid[row][1];
		line[3] = grid[row][0];
		visible = count_visible(line);
		if (visible != clues[12 + row])
		{
			write(1, "Error\n", 6);
			return (0);
		}
		row++;
	}
	return (1);
}

int	check_col_up(int grid[4][4], int clues[16])
{
	int	col;
	int	row;
	int	line[4];
	int	visible;
	
	col = 0;
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
			write(1, "Error\n", 6);
			return (0);
		}
		col++;
	}
	return (1);
}

int	check_col_down(int grid[4][4], int clues[16])
{
	int	col;
	int	row;
	int	line[4];
	int	visible;
	
	col = 0;
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
			write(1, "Error\n", 6);
			return (0);
		}
		col++;
	}
	return (1);
}
