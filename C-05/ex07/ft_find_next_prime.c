/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:02:57 by bysong            #+#    #+#             */
/*   Updated: 2022/02/19 13:19:56 by bysong           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
int main ()
	{
		printf("----ex07----\n");
		printf("2 : %d\n", ft_find_next_prime(-123));
		printf("7 : %d\n", ft_find_next_prime(6));
		printf("11 : %d\n", ft_find_next_prime(11));
		printf("2 : %d\n", ft_find_next_prime(0));
		printf("31 : %d\n", ft_find_next_prime(30));
		printf("97 : %d\n", ft_find_next_prime(90));
	}
