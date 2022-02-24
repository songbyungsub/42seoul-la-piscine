/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:27:42 by bysong            #+#    #+#             */
/*   Updated: 2022/02/24 08:41:23 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range_(int	min, int	max)
{
	int	*result;
	int	i;

	i = 0;
	result = (int *) malloc (sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (result == NULL)
		return (0);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	*range = ft_range_(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
