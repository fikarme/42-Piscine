/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:08:55 by akdemir           #+#    #+#             */
/*   Updated: 2023/04/11 14:09:50 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*a;

	a = malloc(sizeof(strs));
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			a[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			a[x++] = sep[j++];
		}
		i++;
	}
	a[x] = '\0';
	return (a);
}
