/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:37:21 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/14 20:25:49 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	divisor = 3;
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor += 2;
	}
	return (1);
}

/*
int	main(void)
{
	printf("result for number from 1 to 100:\n");
	for (int nb = 1; nb <= 100; nb++)
	{
		if (ft_is_prime(nb) == 1)
			printf("%d, ", nb);
	}
	printf("\n");
	printf("result for 2147483647 is %d\n", ft_is_prime(2147483647));
	return (0);
}*/
