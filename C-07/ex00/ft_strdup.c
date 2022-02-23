/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:58:40 by bysong            #+#    #+#             */
/*   Updated: 2022/02/23 17:02:31 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	result = (char *)malloc(sizeof(char) *(i + 1));
	i = 0;
	if (result == NULL)
		return (0);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
int main()
{
	printf("----ex00----\n");
		char *str;
		str = ft_strdup("HELLO WORLD!!!");
		printf("%s\n", str);
		free (str);
		str = ft_strdup("42!~?@(10\t~~!");
		printf("%s\n", str);
		free (str);
		str = ft_strdup("");
		printf("%s\n", str);
		free (str);
}
