/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:35:52 by bysong            #+#    #+#             */
/*   Updated: 2022/02/15 17:22:09 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
	if (size <= d_size)
		return (size + ft_strlen(src));
	s_size = 0;
	while (src[s_size] != '\0' && (d_size + s_size + 1 < size))
	{
		dest[d_size + s_size] = src[s_size];
		s_size++;
	}
	dest[d_size + s_size] = '\0';
	return ((d_size) + ft_strlen(src));
}
