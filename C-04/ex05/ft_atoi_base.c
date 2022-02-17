/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:59:02 by bysong            #+#    #+#             */
/*   Updated: 2022/02/17 17:07:53 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_baselen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a] != '\0' )
	{
		b = a + 1;
		if (base[a] == '+' || base[a] == '-' || base[a] == '\t'
			|| base[a] == ' ' || base[a] == '\n'
			|| base[a] == '\v' || base[a] == '\f' || base[a] == '\r')
			return (0);
		if (base[a] < 32 || base[a] > 126)
			return (0);
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	ft_checkcheck(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	c;
	int	minus;
	int	i;

	c = 0;
	minus = 1;
	i = 0;
	if (ft_check_base(base) == 0)
		return (0);
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			minus *= -1;
		c++;
	}
	while (ft_checkcheck(str[c], base) != -1)
	{
		i = (i * ft_baselen(base)) + (ft_checkcheck(str[c], base));
		c++;
	}
	return (i * minus);
}
int main()
{
	{
		printf("----ex05----\n");
		char *str1 = "   ---+--+AABCDESSEZ";
		char *str2 = "  \n \ta-a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+!!@@#..<";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("-67174\n");
		printf("%d\n", ft_atoi_base(str1, "ABCDES")); // 6base
		printf("\n");
		printf("-1\n");
		printf("%d\n", ft_atoi_base(str1, "ABZ")); 	
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str3, "A-+")); // +- include
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str1, "")); // 0base
		printf("\n");
		printf("-2147483648\n");
		printf("%d\n", ft_atoi_base(str5, "0123456789")); // 10base
		printf("\n");
		printf("2\n");
		printf("%d\n", ft_atoi_base(str2, "cba")); // 3base
		printf("\n");
		printf("1126397\n");
		printf("%d\n", ft_atoi_base(str4, "!@#$%^&*()~?><'.")); // 16base
		printf("\n");
	}
	printf("\n");
}
