void	ft_putchar(char c);

void	condiciones_rush(int x, int y, int col, int row)
{
	if ((x < 48 && x > 57 || y < 48 && y > 57))
		return ;
	if ((col == 1 && row == 1) || (col == x && row == 1))
		ft_putchar('A');
	else if ((col == 1 && row == y) || (col == x && row == y))
		ft_putchar('C');
	else if ((row == 1 || row == y) && (col > 1 && col < x))
		ft_putchar('B');
	else if ((col == 1 || col == x) && (row > 1 && row < y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush02(int x, int y)
{
	int	col;
	int	row;

	x = 5;
	y = 3;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			condiciones_rush(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
