/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:20:02 by akdemir           #+#    #+#             */
/*   Updated: 2023/03/23 12:21:45 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tersalfabe;

	tersalfabe = 'z';
	while (tersalfabe >= 'a')
	{
		write(1, &tersalfabe, 1);
		tersalfabe--;
	}	
}
