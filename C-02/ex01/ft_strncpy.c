/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:45:53 by bysong            #+#    #+#             */
/*   Updated: 2022/02/12 18:13:25 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
int main()
{
	char src[] = "Source string.";
	char dest[] = "Destination string.";
	unsigned int n;

	n = 2;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
