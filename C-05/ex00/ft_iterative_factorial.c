/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 08:56:04 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 10:28:07 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
		i *= nb--;
	return (i);
}
int main()
{
		printf("----ex00----\n");
		printf("5! : %d\n", ft_iterative_factorial(5));
		printf("1! : %d\n", ft_iterative_factorial(1));
		printf("0! : %d\n", ft_iterative_factorial(0));
		printf("7! : %d\n", ft_iterative_factorial(7));
		printf("-1! : %d\n", ft_iterative_factorial(-1));
		printf("10000! : %d\n", ft_iterative_factorial(10000));
}
