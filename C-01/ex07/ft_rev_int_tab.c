/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:29 by bysong            #+#    #+#             */
/*   Updated: 2022/02/10 17:54:37 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	right;
	int	left;
	int	temp;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		temp = tab[right];
		tab[right] = tab[left];
		tab[left] = temp;
		left++;
		right--;
	}
}
int main(){
int intarr1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,100,2};
	int intarr2[20] = {};


	printf("ex07\n");
	for(int i=0;i<14;i++){
		printf("%d ",intarr1[i]);
	}
	printf("\n");
	for(int i=0;i<9;i++){
		printf("%d ",intarr2[i]);
	}
	printf("\nWill Turn To...\n");
	ft_rev_int_tab(intarr1, 14);
	ft_rev_int_tab(intarr2, 9);
	for(int i=0;i<14;i++){
		printf("%d ",intarr1[i]);
	}
	printf("\n");
	for(int i=0;i<9;i++){
		printf("%d ",intarr2[i]);
	}
}
