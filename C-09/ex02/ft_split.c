/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:32:26 by bysong            #+#    #+#             */
/*   Updated: 2022/02/24 16:41:13 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strcpy(char	*str, int	size)
{
	char	*string;
	int		i;

	i = 0;
	string = malloc(sizeof(char) * (size + 1));
	if (string == NULL)
		return (0);
	while (i < size && str[i])
	{
		string[i] = str[i];
		i++;
	}
	string[i] = 0;
	return (string);
}

int	charset_check(char	str, char	*charset)
{
	while (*charset != '\0')
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	len_count(char	*str, char	*charset)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && charset_check(str[len], charset) == 0)
		len++;
	return (len);
}

int	word_count(char	*str, char	*charset)
{
	int	len_word;
	int	count_word;

	len_word = 0;
	count_word = 0;
	while (*str != '\0')
	{
		while (*str && charset_check(*str, charset))
			str++;
		len_word = len_count(str, charset);
		str += len_word;
		if (len_word)
			count_word++;
	}
	return (count_word);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**string;
	int		i;
	int		word_size;
	int		size;

	i = 0;
	size = word_count(str, charset);
	string = malloc(sizeof(char *) * size + 1);
	if (string == NULL)
		return (0);
	while (i < size)
	{
		while (charset_check(*str, charset))
			str++;
		word_size = len_count(str, charset);
		string[i] = ft_strcpy(str, word_size);
		str += word_size;
		i++;
	}
	string[size] = 0;
	return (string);
}
