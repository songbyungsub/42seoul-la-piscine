/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:18:05 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 10:28:17 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
int main()
{
		printf("----ex01----\n");
		printf("5! : %d\n", ft_recursive_factorial(5));
		printf("1! : %d\n", ft_recursive_factorial(1));
		printf("0! : %d\n", ft_recursive_factorial(0));
		printf("7! : %d\n", ft_recursive_factorial(7));
		printf("-1! : %d\n", ft_recursive_factorial(-1));
		printf("10000! : %d\n", ft_recursive_factorial(10000));
}
