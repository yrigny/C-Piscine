/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybauer <ybauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:05:08 by ybauer            #+#    #+#             */
/*   Updated: 2023/08/05 21:08:55 by ybauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char left, char mid, char right, int len)
{
	int	count_mid_h;

	count_mid_h = 0;
	ft_putchar(left);
	while (count_mid_h < len - 2)
	{
		ft_putchar(mid);
		count_mid_h++;
	}
	if (len >= 2)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count_mid_v;

	count_mid_v = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Please enter positive value for x and y.\n", 41);
	}
	if (x > 0 && y > 0)
	{
		ft_putline('o', '-', 'o', x);
		while (count_mid_v < y - 2)
		{
			ft_putline('|', ' ', '|', x);
			count_mid_v++;
		}
		if (y >= 2)
			ft_putline('o', '-', 'o', x);
	}
}
