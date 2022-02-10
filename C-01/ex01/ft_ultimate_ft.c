/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:39:40 by bysong            #+#    #+#             */
/*   Updated: 2022/02/09 19:27:09 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
int b = -1;
	int *ft_b = &b;
	int **ft2_b = &ft_b;
	int ***ft3_b = &ft2_b;
	int ****ft4_b = &ft3_b;
	int *****ft5_b = &ft4_b;
	int ******ft6_b = &ft5_b;
	int *******ft7_b = &ft6_b;
	int ********ft8_b = &ft7_b;
	printf("ex01\nbefore ft_ultimate_ft : %d\n",********ft8_b);
	ft_ultimate_ft(&ft8_b);
	printf("after ft_ultimate_ft : %d\n\n",********ft8_b);
}

