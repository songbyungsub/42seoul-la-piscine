/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:33:35 by selee2            #+#    #+#             */
/*   Updated: 2022/02/06 21:22:27 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r_x;
	int	r_y;

	r_y = 0;
	while (++r_y <= y && x > 0)
	{
		r_x = 0;
		while (++r_x <= x)
		{
			if ((r_x == 1 && r_y == 1))
				ft_putchar('A');
			else if ((r_x == x && r_y == 1) || (r_x == 1 && r_y == y))
				ft_putchar('C');
			else if ((r_x == x && r_y == y))
				ft_putchar('A');
			else if (((1 < r_x) && (r_x < x)) && (r_y == 1 || r_y == y))
				ft_putchar('B');
			else if (((1 < r_y) && (r_y < y)) && (r_x == 1 || r_x == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
