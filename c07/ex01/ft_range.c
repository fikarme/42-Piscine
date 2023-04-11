/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:24:02 by akdemir           #+#    #+#             */
/*   Updated: 2023/04/11 14:09:39 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dup;

	dup = (int *)malloc((max - min + 1) * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		dup[i] = min;
		min++;
		i++;
	}
	return (dup);
}
