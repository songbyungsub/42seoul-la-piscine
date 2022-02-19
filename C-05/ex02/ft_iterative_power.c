/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:31:09 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 10:51:30 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (i);
	else
	{
		while (power > 1)
		{
			i *= nb;
			power--;
		}
		return (i);
	}
}
int main()
{
	printf("----ex02----\n");
		printf("2^4 : %d\n", ft_iterative_power(2, 4));
		printf("1^0 : %d\n", ft_iterative_power(1, 0));
		printf("0^2 : %d\n", ft_iterative_power(0, 2));
		printf("-2^1 : %d\n", ft_iterative_power(-2, 1));
		printf("-4^2 : %d\n", ft_iterative_power(-4, 2));
		printf("5^-1 : %d\n", ft_iterative_power(5, -1));
		printf("0^0 : %d\n", ft_iterative_power(0, 0));
	}
