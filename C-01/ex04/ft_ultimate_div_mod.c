/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:48:48 by bysong            #+#    #+#             */
/*   Updated: 2022/02/10 10:14:09 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int main()
{
	int ult_div=120;
	int ult_mod=11;
	printf("ex04\nbefore ft_ultimate_div_mod : %d, %d\n",ult_div, ult_mod);
	ft_ultimate_div_mod(&ult_div, &ult_mod);
	printf("after ft_ultimate_div_mod : %d, %d\n\n",ult_div, ult_mod);
}
