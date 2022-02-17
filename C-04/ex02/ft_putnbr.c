/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:41:17 by bysong            #+#    #+#             */
/*   Updated: 2022/02/17 17:16:37 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
int main()
	{
		printf("----ex02----\n");
		printf("0 : \n");
		ft_putnbr(-0);
		printf("\n");
		printf("2147483647 : \n");
		ft_putnbr(2147483647);
		printf("\n");
		printf("-2147483648 : \n");
		ft_putnbr(-2147483648);
		printf("\n");
		printf("-4242 : \n");
		ft_putnbr(-4242);
		printf("\n");
		printf("123456789 : \n");
		ft_putnbr(123456789);
		printf("\n");
	}
