/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:08:49 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 09:52:55 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0') && (c + 1 < n))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

int main()
{
	char str1[500] = "Hello World!";
		char str2[500] = "Hello Worl";

		printf("----ex01----\n");
		printf("%s\n%s\n",str1, str2);
		printf("Compare\n");
		printf("%d : %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
		printf("%d : %d\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
		printf("%d : %d\n", strncmp(str1, str2, 30), ft_strncmp(str1, str2, 30));
}
