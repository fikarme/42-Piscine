/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:02:48 by akdemir           #+#    #+#             */
/*   Updated: 2023/04/01 12:15:56 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			if (to_find[x + 1] == 0)
			{
				return (&str[i]);
			}
			x++;
		}
		i++;
	}
	return (0);
}
