/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:35:36 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/03 18:25:34 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n1, int n2, int n3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0' + n1;
	c2 = '0' + n2;
	c3 = '0' + n3;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				ft_print_numbers(num1, num2, num3);
				if (!(num1 == 7 && num2 == 8 && num3 == 9))
				{
					write(1, ", ", 2);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
