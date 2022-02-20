/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:46:22 by bysong            #+#    #+#             */
/*   Updated: 2022/02/20 12:22:12 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

void	ft_swapsort(char	**tab, int size)
{
	char	*temp;
	int		first;
	int		second;

	first = 1;
	while (first < size - 1)
	{
		second = first + 1;
		while (second < size)
		{
			if (ft_strcmp(tab[first], tab[second]) > 0)
			{
				temp = tab[first];
				tab[first] = tab[second];
				tab[second] = temp;
			}
			second++;
		}
		first++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_swapsort (argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
