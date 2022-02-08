/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johyoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:35:03 by johyoon           #+#    #+#             */
/*   Updated: 2022/02/06 21:05:32 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

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
			if ((r_x == 1 && r_y == 1) || (r_x == x && r_y == 1))
				ft_putchar('o');
			else if ((r_x == 1 && r_y == y) || (r_x == x && r_y == y))
				ft_putchar('o');
			else if (((1 < r_y) && (r_y < y)) && (r_x == 1 || r_x == x))
				ft_putchar('|');
			else if ((1 < r_x < x) && (r_y == 1 || r_y == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			r_x++;
		}
		ft_putchar('\n');
		r_y++;
	}
}
