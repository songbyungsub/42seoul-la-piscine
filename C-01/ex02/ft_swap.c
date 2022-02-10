/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:36:17 by bysong            #+#    #+#             */
/*   Updated: 2022/02/09 21:51:16 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int first = 12;
	int second = 24;
	printf("ex02\nbefore ft_swap : %d, %d\n",first, second);
	ft_swap(&first, &second);
	printf("after ft_swap : %d, %d\n\n",first, second);
}
