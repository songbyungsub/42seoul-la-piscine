/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:22:58 by bysong            #+#    #+#             */
/*   Updated: 2022/02/09 10:19:53 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putchar2(int nb)
{
	char	a;

	if (nb < 10)
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putchar2 (nb / 10);
		a = (nb % 10 + '0');
		ft_putchar(a);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
		ft_putchar2(nb);
	}
	else
	{
		ft_putchar2(nb);
	}
}
