/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:24:57 by akdemir           #+#    #+#             */
/*   Updated: 2023/04/09 09:45:54 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		a;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}
