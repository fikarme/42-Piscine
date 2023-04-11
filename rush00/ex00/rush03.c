/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisik <aisik@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:39:28 by biekinci          #+#    #+#             */
/*   Updated: 2023/03/26 18:30:41 by aisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*g_c;
int		g_sutun;
int		g_satir;
int		g_sec;

void	ft_putchar(char c);

void	tablo_ciz(int x, int y)
{
	if (g_satir == 0 || g_satir == y - 1)
	{
		if (g_sutun == 0 || g_sutun == x - 1)
		{
			ft_putchar(g_c[g_sec]);
			g_sec++;
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (g_sutun == 0 || g_sutun == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	g_c = "ACAC";
	g_sutun = 0;
	g_satir = 0;
	g_sec = 0;
	while (g_satir != y && y > 0 && x > 0)
	{
		g_sutun = 0;
		while (g_sutun != x && x > 0)
		{
			tablo_ciz(x, y);
			g_sutun++;
		}
		ft_putchar('\n');
		g_satir++;
	}
}
