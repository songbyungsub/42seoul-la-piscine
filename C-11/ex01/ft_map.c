#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int) * length);
	if (length < 1 || !array)
		return (0);
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}
