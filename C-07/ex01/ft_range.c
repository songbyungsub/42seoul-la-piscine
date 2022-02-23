/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:46:36 by bysong            #+#    #+#             */
/*   Updated: 2022/02/23 17:02:58 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int	min, int	max)
{
	int	*result;
	int	i;

	i = 0;
	result = (int *) malloc (sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (result == NULL)
		return (0);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
int main()
{
	printf("----ex01----\n");
		int	*arr;
		arr = ft_range(-9, 10);
		for(int i=0;i<10-(-9);i++)
			printf("%d ",arr[i]);
		printf("\n");
		free(arr);
		arr = ft_range(1, 1);
		printf("%p\n", arr);
		free(arr);
}
