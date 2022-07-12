int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up_sort;
	int	down_sort;

	up_sort = 0;
	down_sort = 0;
	i = 0;
	if (length <= 1)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			up_sort++;
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			down_sort++;
		i++;
	}
	if (up_sort == (length - 1) || down_sort == (length - 1))
		return (1);
	return (0);
}
