#include<unistd.h>

void	ft_print_num3(char num[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write (1, &num[i], 1);
		i++;
	}
}

void	ft_put_num(char *num, int n)
{
	int		i;

	while (1)
	{
		if (num[0] == 10 - n + '0' && num[n - 1] == '9')
			break ;
		write (1, ", ", 2);
		i = n - 1;
		while (num[i] == '9' - (n - 1 - i))
			i--;
		num[i]++;
		i++;
		while (i < n)
		{
			num[i] = num[i - 1] + 1;
			i++;
		}
		ft_print_num3 (num, n);
	}
}

void	ft_print_combn(int n)
{
	char	num[10];
	int		i;

	num[0] = '0';
	i = 1;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
	ft_print_num3 (num, n);
	ft_put_num (num, n);
}
