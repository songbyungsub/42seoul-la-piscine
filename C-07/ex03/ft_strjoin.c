/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:38:21 by bysong            #+#    #+#             */
/*   Updated: 2022/02/23 14:30:22 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(char **strings, int size, int sep_length)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_str_length(strings[i]);
		total_length += sep_length;
		i++;
	}
	total_length -= sep_length;
	return (total_length);
}

char	*ret_zero(char	*string)
{
	string = ((char *)malloc(sizeof(char)));
	string[0] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		big_index;
	char	*string;
	int		small_index;
	int		offset;

	string = NULL;
	if (size == 0)
		return (ret_zero(string));
	full_length = ft_total_length(strs, size, ft_str_length(sep));
	string = (char *)malloc(sizeof(char) * (full_length + 1));
	big_index = -1;
	offset = 0;
	while (++big_index < size)
	{
		small_index = 0;
		while (strs[big_index][small_index] != '\0')
			string[offset++] = strs[big_index][small_index++];
		small_index = 0;
		while (sep[small_index] != '\0' && big_index < (size - 1))
			string[offset++] = sep[small_index++];
	}
	string[offset] = '\0';
	return (string);
}

int main()
{
		printf("----ex03----\n");
		char *strs[10];
		strs[0] = "Hello";
		strs[1] = "My";
		strs[2] = "name";
		strs[3] = "is";
		strs[4] = "sryou";
		strs[5] = "Nice";
		strs[6] = "to";
		strs[7] = "see";
		strs[8] = "you";
		strs[9] = "!!!";
		char *sep1 = " ";
		char *sep2 = "\n";
		char *sep3 = "---!!---";
		char *sep4 = "";
		char *str;
		str = ft_strjoin(5, strs, sep1);
		printf("%s\n", str);
		free(str);
		str = ft_strjoin(10, strs, sep2);
		printf("%s\n", str);
		free(str);
		str = ft_strjoin(2, strs, sep3);
		printf("%s\n", str);
		free(str);
		str = ft_strjoin(1, strs, sep1);
		printf("%s\n", str);
		free(str);
		str = ft_strjoin(0, strs, sep1);
		printf("%s\n", str);
		free(str);
		str = ft_strjoin(10, strs, sep4);
		printf("%s\n", str);
		free(str);
}
