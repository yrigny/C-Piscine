/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:16:18 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/07 21:17:30 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 4;
	y = 2;
	ft_div_mod(x, y, &div, &mod);
	printf("x / y = %d, x %% y = %d\n", div, mod);
	return 0;
}*/
