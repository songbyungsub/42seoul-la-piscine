/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:32:50 by bysong            #+#    #+#             */
/*   Updated: 2022/02/12 20:35:32 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}
int		main(void)
{
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;

	char special[] = "0123456789_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only numerical chars\n0 = String doesn't contain only numerical chars\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));

	return (0);
}

