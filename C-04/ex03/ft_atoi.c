/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:27 by bysong            #+#    #+#             */
/*   Updated: 2022/02/17 10:18:09 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	c;
	int	minus;
	int	i;

	c = 0;
	minus = 1;
	i = 0;
	while (str[c] <= 32)
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			minus *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		i = (i * 10) + (str[c] - '0');
		c++;
	}
	return (i * minus);
}
int main()
{
	{
		printf("----ex03----\n");
		char *str1 = "   ---+--+1234ab567";
		char *str2 = "  \n \ta-a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+001458 24567";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("%s : %d\n", str1, ft_atoi(str1));
		printf("%s : %d\n", str2, ft_atoi(str2));
		printf("%s : %d\n", str3, ft_atoi(str3));
		printf("%s : %d\n", str4, ft_atoi(str4));
		printf("%s : %d\n", str5, ft_atoi(str5));
	}
	printf("\n");
}
