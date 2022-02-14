/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:35:52 by bysong            #+#    #+#             */
/*   Updated: 2022/02/14 21:55:39 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	s_size;

	d_size = ft_strlen(dest);

	if(size <= d_size)
		return (size + ft_strlen(src));

	s_size = 0;
	while(src[s_size] != '\0' && (d_size + s_size + 1 < size))
	{
		dest[d_size + s_size] = src[s_size];
		s_size++;
	}
	dest[d_size + s_size]= '\0';
	
	return ((d_size) + ft_strlen(src));
}

int				main()
{
	{
		char str1[500] = "strlcat! ";
		char str2[500] = "But I don't like cat...";

		printf("----ex05----\n");
		printf("%s\n%s\n",str1, str2);
		printf("5 Cat\n");
		printf("cated val : %lu\n", strlcat(str1, str2, 5) );
		printf("After 5 cat\n");
		printf("%s\n%s\n", str1, str2);
		printf("30 Cat\n");
		printf("cated val : %lu\n", strlcat(str1, str2, 30) );
		printf("After 30 cat\n");
		printf("15 Cat\n");
		printf("cated val : %lu\n", strlcat(str1, str2, 15) );
		printf("After 15 cat\n");
		printf("%s\n%s\n", str1, str2);
	}
	printf("\n");
	{
		char str1[500] = "strlcat! ";
		char str2[500] = "But I don't like cat...";

		printf("test\n");
		printf("%s\n%s\n",str1, str2);
		printf("5 Cat\n");
		printf("cated val : %u\n", ft_strlcat(str1, str2, 5) );
		printf("After 5 cat\n");
		printf("%s\n%s\n", str1, str2);
		printf("30 Cat\n");
		printf("cated val : %u\n", ft_strlcat(str1, str2, 30) );
		printf("After 30 cat\n");
		printf("%s\n%s\n", str1, str2);
		printf("15 Cat\n");
		printf("cated val : %u\n", ft_strlcat(str1, str2, 15) );
		printf("After 15 cat\n");
		printf("%s\n%s\n", str1, str2);
	}
}
