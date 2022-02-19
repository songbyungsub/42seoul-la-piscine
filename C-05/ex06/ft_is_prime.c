/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:14:30 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 13:06:12 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while ((i <= nb / 2) && (i < 41361))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main()
{
	printf("----ex06----\n");
		printf("0 : %d\n", ft_is_prime(36));
		printf("0 : %d\n", ft_is_prime(27));
		printf("0 : %d\n", ft_is_prime(1));
		printf("0 : %d\n", ft_is_prime(-1));
		printf("1 : %d\n", ft_is_prime(29));
		printf("1 : %d\n", ft_is_prime(11));
		printf("1 : %d\n", ft_is_prime(3));
		printf("1 : %d\n", ft_is_prime(2));
}
