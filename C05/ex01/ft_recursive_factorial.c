/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:55:04 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/14 20:01:39 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	int nb[] = {5, 2, 1, 0, -3};
	for (int i = 0; i < 5; i++)
		printf("%d! is %d\n", nb[i], ft_recursive_factorial(nb[i]));
	return (0);
}
*/
