/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:24:25 by bysong            #+#    #+#             */
/*   Updated: 2022/02/13 19:56:10 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hex_mod(int n)
{
	char	*hex_;

	hex_ = "0123456789abcdef";
	write(1, &hex_[n / 16], 1);
	write(1, &hex_[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			hex_mod((unsigned char)str[i]);
		}
		i++;
	}
}

int main()
{
	char str1[1000] = "Cooucou\ntu vas bien ?";
		char str2[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70};
		char str3[1000] = "\\'/<>!@#$%^&*()_+-=  0.2158\n\tasdf";
		printf("----ex11----\n");
		printf("Before Change\nstr1 : \n%s\nstr2 : \n%s\nstr3 : \n%s\n", str1, str2, str3);
		ft_putstr_non_printable(str1);
		printf("\n");
		ft_putstr_non_printable(str2);
		printf("\n");
		ft_putstr_non_printable(str3);
		printf("\n");
}
