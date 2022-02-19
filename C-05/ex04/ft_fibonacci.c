/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:32:00 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 10:58:13 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int	index)
{
	int	i;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
}
int main()
{
		printf("----ex04----\n");
		printf("0 : %d\n", ft_fibonacci(0));
		printf("-1 : %d\n", ft_fibonacci(-4));
		printf("1 : %d\n", ft_fibonacci(1));
		printf("1 : %d\n", ft_fibonacci(2));
		printf("2 : %d\n", ft_fibonacci(3));
		printf("8 : %d\n", ft_fibonacci(6));
}
