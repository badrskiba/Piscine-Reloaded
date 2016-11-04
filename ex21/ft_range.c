/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:15:02 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/04 13:42:05 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int strlen;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	strlen = max - min;
	str = (int*)malloc(sizeof(int) * (strlen + 1));
	if (!str)
		return (NULL);
	while (strlen >= 0)
	{
		str[i] = min + i;
		i++;
		strlen--;
	}
	return (str);
}
