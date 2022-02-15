/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:27:06 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 15:51:43 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < nb))
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
		printf("----ex03----\n");
		printf("%s\n%s\n",str1, str2);
		printf("5 Cat\n");
		printf("cated srt : %s\n", strncat(str1, str2, 5) );
		printf("After 5 cat\n");
		printf("%s\n%s\n", str1, str2);	
	}
