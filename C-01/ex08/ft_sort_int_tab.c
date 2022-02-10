/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:55:08 by bysong            #+#    #+#             */
/*   Updated: 2022/02/10 20:33:39 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	first;
	int	second;

	first = 0;
	while (first < size)
	{
		second = 0;
		while (second < size - 1)
		{
			if (tab[second] > tab[second + 1])
			{
				temp = tab[second];
				tab[second] = tab[second + 1];
				tab[second + 1] = temp;
			}
			second++;
		}
		first++;
	}
}
int main()
{
	int johyoon[10] = {1,734,38,28,4,5,9,87234,912,49257};
	int size = 10;
	int i = 0;

	ft_sort_int_tab(johyoon, size);

	while (i <size)
	{
		printf("%d ", johyoon[i]);
		i++;
	}
}
