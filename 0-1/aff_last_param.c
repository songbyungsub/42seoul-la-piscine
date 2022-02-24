#include <unistd.h>
int		main(int argc, char **argv)
{
	int	i;
	i = 0;
		while (argv[argc-1][0])
		{
			write(1, &argv[0][0], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
