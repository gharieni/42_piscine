int		check_lines(char **sudoku, int x, int y, char c)
{
	int		x2;

	x2 = 0;
	while (x2 < 9)
	{
		if (sudoku[x2++][y] == c)
			return (0);
	}
	y = 0;
	while (y < 9)
	{
		if (sudoku[x][y++] == c)
			return (0);
	}
	return (1);
}

int		check_cell(char **sudoku, int x, int y, char c)
{
	int		cell_x;
	int		cell_y;

	cell_x = x / 3 * 3;
	cell_y = y / 3 * 3;
	x = cell_x;
	y = cell_y;
	while (y < cell_y + 3)
	{
		if (sudoku[x][y] == c)
			return (0);
		x++;
		if (x >= cell_x + 3)
		{
			x = cell_x;
			y++;
		}
	}
	return (1);
}
