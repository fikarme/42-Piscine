/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:02:41 by akdemir           #+#    #+#             */
/*   Updated: 2023/04/01 12:15:38 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}

char	*ft_strcat(char *dest, char *src)

{
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
