/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:21:26 by bysong            #+#    #+#             */
/*   Updated: 2022/02/13 12:08:24 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}
int main()
{
	char str1[50] = "1 as f;;'23?!~4";
		char str2[50] = "\n";
		char str3[50] = "";
		char str4[50] = {1, 2, 0};
		printf("----ex06----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_printable(str1), ft_str_is_printable(str2), ft_str_is_printable(str3), ft_str_is_printable(str4));
}
