/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:04 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 17:05:08 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int main()
{
	char str1[500] = "Hello My name is sryou and sryou is my name.. Nice to meet you ";
		char str2[500] = "sryou";
		char str3[500] = "My name is happy";

		printf("----ex04----\n");
		printf("%s\n%s\n", str1, str2);
		printf("Find str : %s\n", strstr(str1, str2));
		printf("Find str : %s\n", strstr(str1, str3));
		printf("Find str : %s\n", strstr(str2, str3));
		}
