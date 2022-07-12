#include <unistd.h>
#include "param.h"

int		max_check(int box[][4], int *input);
void	print_box(int box[][4]);
int		get_box(t_param p);
int		check_argv(char *av, int *input);

void	init(int box[][4], int check_ud[][5], int check_lr[][5])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			box[i][j] = 0;
			check_ud[i][j + 1] = 0;
			check_lr[i][j + 1] = 0;
			j++;
		}
		i++;
	}
}

int	range_check(t_param p)
{
	if (p.y == 3)
	{
		if (max_check(p.box, p.input))
		{
			print_box(p.box);
			return (1);
		}
		return (0);
	}
	p.y += 1;
	p.x = 0;
	return (get_box(p));
}

int	mark1(t_param p, int num)
{
	p.box[p.y][p.x] = num;
	p.check_ud[p.x][num] = 1;
	p.check_lr[p.y][num] = 1;
	p.x += 1;
	return (get_box(p));
}

int	get_box(t_param p)
{
	int	num;
	int	ret;

	if (p.x == 4)
	{
		return (range_check(p));
	}
	ret = 0;
	num = 0;
	while (++num <= 4)
	{
		if (p.check_ud[p.x][num] || p.check_lr[p.y][num])
			continue ;
		if (ret == 0 && mark1(p, num) == 0)
			ret = 0;
		else
			ret = 1;
		if (ret == 1)
			return (ret);
	}
	return (ret);
}

int	main(int argc, char *argv[])
{
	t_param	p;

	if (argc == 2)
	{
		if (check_argv(argv[1], p.input))
		{
			init(p.box, p.check_ud, p.check_lr);
			p.x = 0;
			p.y = 0;
			if (!get_box(p))
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
