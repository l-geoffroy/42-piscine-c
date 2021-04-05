
int		ft_check_col_up(int grid[4][4], int col, int view)
{
	int i;
	int max;
	int count;

	i = 0;
	count = 1;
	max = grid[i][col];
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i++;
	}
	if (count == view)
		return (1);
	return (0);
}

int		ft_check_col_down(int grid[4][4], int col, int view)
{
	int i;
	int max;
	int count;

	i = 3;
	count = 1;
	max = grid[i][col];
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i--;
	}
	if (count == view)
		return (1);
	return (0);
}

int		ft_check_row_left(int grid[4][4], int row, int view)
{
	int i;
	int max;
	int count;

	i = 0;
	count = 1;
	max = grid[row][i];
	while (i < 4)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
		i++;
	}
	if (count == view)
		return (1);
	return (0);
}

int		ft_check_row_right(int grid[4][4], int row, int view)
{
	int i;
	int max;
	int count;

	i = 3;
	count = 1;
	max = grid[row][i];
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
		i--;
	}
	if (count == view)
		return (1);
	return (0);
}

int		ft_check_grid(int grid[4][4], int *views)
{
	int i;

	i = 0;
	while (views[i])
	{
		if (i >= 0 && i <= 3)
			if (!ft_check_col_up(grid, i, views[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!ft_check_col_down(grid, i - 4, views[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!ft_check_row_left(grid, i - 8, views[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!ft_check_row_right(grid, i - 12, views[i]))
				return (0);
		i++;
	}
	return (1);
}
