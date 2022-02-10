/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:53:25 by bysong            #+#    #+#             */
/*   Updated: 2022/02/10 13:30:13 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar (*str);
		str++;
	}
}
int main()
{
	ft_putstr("ex05\nHello This file is made my sryou...\n");
	char *charr1 = "HEllO!!\n";
	char charr2[10] = {'a','b','c','d','e','\n','f'};
	ft_putstr(charr1);
	ft_putstr(charr2);
	printf("\n\n");
}
