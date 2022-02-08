/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:36:39 by bysong            #+#    #+#             */
/*   Updated: 2022/02/06 21:08:51 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r_x;
	int	r_y;

	r_y = 1;
	while (r_y <= y && x > 0)
	{
		r_x = 1;
		while (r_x <= x)
		{
			if ((r_x == 1 && r_y == 1) || (r_x == 1 && r_y == y))
				ft_putchar('A');
			else if ((r_x == x && r_y == 1) || (r_x == x && r_y == y))
				ft_putchar('C');
			else if (((1 < r_x) && (r_x < x)) && (r_y == 1 || r_y == y))
				ft_putchar('B');
			else if (((1 < r_y) && (r_y < y)) && (r_x == 1 || r_x == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			r_x++;
		}
		ft_putchar('\n');
		r_y++;
	}
}
