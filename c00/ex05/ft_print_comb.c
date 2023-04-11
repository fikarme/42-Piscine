/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:20:11 by akdemir           #+#    #+#             */
/*   Updated: 2023/03/23 15:17:10 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sayiwrite(int yuzler, int onlar, int birler)
{
	write(1, &yuzler, 1);
	write(1, &onlar, 1);
	write(1, &birler, 1);
}

void	ft_print_comb(void)
{
	char	yuzler;
	char	onlar;
	char	birler;

	yuzler = '0';
	onlar = '1';
	birler = '2';
	while (yuzler <= '7')
	{
		onlar = yuzler + 1;
		while (onlar <= '8')
		{
			birler = onlar + 1;
			while (birler <= '9')
			{
				sayiwrite(yuzler, onlar, birler);
				if (yuzler != '7')
					write(1, ", ", 2);
				birler++;
			}
			onlar++;
		}
		yuzler++;
	}
}
