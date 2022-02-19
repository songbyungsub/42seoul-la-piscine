/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:00:55 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 10:31:22 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int	nb, int	power)
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
		return (i * ft_recursive_power(i, power - 1));
}

int main()
{
		printf("----ex03----\n");
		printf("2^4 : %d\n", ft_recursive_power(2, 4));
		printf("1^0 : %d\n", ft_recursive_power(1, 0));
		printf("0^2 : %d\n", ft_recursive_power(0, 2));
		printf("-2^1 : %d\n", ft_recursive_power(-2, 1));
		printf("-4^2 : %d\n", ft_recursive_power(-4, 2));
		printf("5^-1 : %d\n", ft_recursive_power(5, -1));
		printf("0^0 : %d\n", ft_recursive_power(0, 0));
}
