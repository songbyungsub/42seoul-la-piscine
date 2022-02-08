/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:24:23 by bysong            #+#    #+#             */
/*   Updated: 2022/02/08 19:43:58 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar (i / 10 + '0');
			ft_putchar (i % 10 + '0');
			write (1, " ", 1);
			ft_putchar (j / 10 + '0');
			ft_putchar (j % 10 + '0');
			if (i != 98 || j != 99)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
