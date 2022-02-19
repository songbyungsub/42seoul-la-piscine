/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:58:33 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 11:13:16 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
int main()
{
		printf("----ex05----\n");
		printf("6 : %d\n", ft_sqrt(36));
		printf("0 : %d\n", ft_sqrt(0));
		printf("9 : %d\n", ft_sqrt(81));
		printf("0 : %d\n", ft_sqrt(-1));
		printf("0 : %d\n", ft_sqrt(99));
		printf("1 : %d\n", ft_sqrt(1));
}
