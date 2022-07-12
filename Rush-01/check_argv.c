int	check_argv(char *av, int *input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		input[j++] = av[i++] - '0';
		if (j == 16 && av[i] == '\0')
			break ;
		if (j > 15 && av[i])
			return (0);
		if (av[i++] != ' ')
			return (0);
	}
	j = -1;
	while (++j < 16)
	{
		if (input[j] < 1 || input[j] > 4)
			return (0);
	}
	return (1);
}
