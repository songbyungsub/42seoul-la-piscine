#include <unistd.h>
#include <stdio.h>

static int	g_cnt = 0;

int	case_check(char *arr, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (arr[i] == arr[col])
			return (0);
		else if (col - i == arr[col] - arr[i])
			return (0);
		else if (col - i == arr[i] - arr[col])
			return (0);
		i++;
	}
	return (1);
}

void	print_array(char *arr, int col)
{
	int	i;

	if (col == 10)
	{
		write(1, arr, 10);
		write(1, "\n", 1);
		g_cnt++;
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			arr[col] = i + '0';
			if (case_check(arr, col))
				print_array(arr, col + 1);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	arr[10];

	print_array(arr, 0);
	return (g_cnt);
}

int main()
{
	printf("%d\n", ft_ten_queens_puzzle());
}
