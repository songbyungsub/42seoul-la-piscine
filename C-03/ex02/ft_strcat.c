/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:53:15 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 15:42:03 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
	int main()
{
	char str1[500] = "Hello World! ";
		char str2[500] = "It is nice to see ya";

		printf("----ex02----\n");
		printf("%s\n%s\n",str1, str2);
		printf("Cat\n");
		printf("cated srt : %s\n", strcat(str1, str2) );
		printf("After cat\n");
	}
