/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 08:34:51 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 09:08:29 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
int	main(void)
{
	
		char str1[500] = "Hello World!";
		char str2[500] = "Hello Well?!";
		printf("----ex00----\n");
		printf("%s\n%s\n",str1, str2);
		printf("Compare\n");
		printf("%d : %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	}
