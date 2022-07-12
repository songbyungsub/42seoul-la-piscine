void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		big;
	int		small;
	char	*temp;

	big = 0;
	while (tab[big])
	{
			small = 0;
		while (tab[small] && tab[small + 1])
		{
			if ((*cmp)(tab[small], tab[small + 1]) > 0)
			{
				temp = tab[small];
				tab[small] = tab[small + 1];
				tab[small + 1] = temp;
			}
			small++;
		}
		big++;
	}
}
