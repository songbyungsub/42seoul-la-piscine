/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:27:42 by bysong            #+#    #+#             */
/*   Updated: 2022/02/23 17:03:12 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;

	i = 0;
	*range = malloc (sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
int main()
{
	printf("----ex02----\n");
		int	*arr;
		int size;
		size = ft_ultimate_range(&arr, 1, 24);
		for(int i=0;i<24-(1);i++)
			printf("%d ",arr[i]);
		printf("\nsize : %d\n", size);
		free(arr);
		size = ft_ultimate_range(&arr, 1, 1);
		printf("%p\n", arr);
		printf("size : %d\n", size);
		free(arr);
}
