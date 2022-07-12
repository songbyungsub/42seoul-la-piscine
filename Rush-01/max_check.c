int	up_check(int box[][4], int col, int num)
{
	int	row;
	int	max;
	int	cnt;

	row = 0;
	max = box[row][col];
	cnt = 1;
	while (row < 4)
	{
		if (box[row][col] > max)
		{
			max = box[row][col];
			cnt++;
		}
		row++;
	}
	if (cnt == num)
		return (1);
	else
		return (0);
}

int	down_check(int box[][4], int col, int num)
{
	int	row;
	int	max;
	int	cnt;

	row = 3;
	max = box[row][col];
	cnt = 1;
	while (row >= 0)
	{
		if (box[row][col] > max)
		{
			max = box[row][col];
			cnt++;
		}
		row--;
	}
	if (cnt == num)
		return (1);
	else
		return (0);
}

int	left_check(int box[][4], int row, int num)
{
	int	col;
	int	max;
	int	cnt;

	col = 0;
	max = box[row][col];
	cnt = 1;
	while (col < 4)
	{
		if (box[row][col] > max)
		{
			max = box[row][col];
			cnt++;
		}
		col++;
	}
	if (cnt == num)
		return (1);
	else
		return (0);
}

int	right_check(int box[][4], int row, int num)
{
	int	col;
	int	max;
	int	cnt;

	col = 3;
	max = box[row][col];
	cnt = 1;
	while (col >= 0)
	{
		if (box[row][col] > max)
		{
			max = box[row][col];
			cnt++;
		}
		col--;
	}
	if (cnt == num)
		return (1);
	else
		return (0);
}

int	max_check(int box[][4], int *input)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (!up_check(box, i, input[i]))
			return (0);
	}
	while (++i < 8)
	{
		if (!down_check(box, i - 4, input[i]))
			return (0);
	}
	while (++i < 12)
	{
		if (!left_check(box, i - 8, input[i]))
			return (0);
	}
	while (++i < 16)
	{
		if (!right_check(box, i - 12, input[i]))
			return (0);
	}
	return (1);
}
