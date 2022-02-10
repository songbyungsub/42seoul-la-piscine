/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:38:58 by bysong            #+#    #+#             */
/*   Updated: 2022/02/10 08:48:16 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int div=1;
	int mod=1;
	printf("ex03\nbefore ft_div_mod : %d, %d\n",div, mod);
	ft_div_mod(13, 5, &div, &mod);
	printf("after ft_div_mod : %d, %d\n\n",div, mod); // 2, 3
}
