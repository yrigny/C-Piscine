/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:19:43 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/14 20:15:43 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	divisor;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	divisor = 1;
	while (divisor <= nb / divisor)
	{
		if (nb / divisor == divisor && nb % divisor == 0)
			return (divisor);
		divisor++;
	}
	return (0);
}

/*
int	main(void)
{
	int	nb[] = {-4, 0, 2, 4, 11, 25};
	for (int i; i < 6; i++)
		printf("sqrt of %d is %d\n", nb[i], ft_sqrt(nb[i]));
	return (0);
}
*/
