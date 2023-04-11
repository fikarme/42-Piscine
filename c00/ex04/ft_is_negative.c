/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:39:34 by akdemir           #+#    #+#             */
/*   Updated: 2023/03/23 12:22:30 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n >= 0)
	{
		write(1, &pozitif, 1);
	}
	else
	{
		write(1, &negatif, 1);
	}
}
