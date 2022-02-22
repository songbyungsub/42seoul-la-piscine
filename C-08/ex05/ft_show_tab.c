/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:56:22 by bysong            #+#    #+#             */
/*   Updated: 2022/02/22 09:19:05 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar (*str);
		str++;
	}
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

void	ft_show_tab(struct	s_stock_str *par)
{
	int	i;

	i = 0;
	while(par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}
