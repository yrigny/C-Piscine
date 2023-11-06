/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:55:20 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/03 18:20:18 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int d1, int d2, int d3, int d4)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + d1;
	c2 = '0' + d2;
	c3 = '0' + d3;
	c4 = '0' + d4;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
}

void	ft_print_pair(int num1, int num2)
{
	int	d1;
	int	d2;
	int	d3;
	int	d4;

	d1 = num1 / 10;
	d2 = num1 % 10;
	d3 = num2 / 10;
	d4 = num2 % 10;
	ft_putchar(d1, d2, d3, d4);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_pair(num1, num2);
			if (num1 < 98)
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
