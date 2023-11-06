/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/14 16:48:10 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/14 16:58:45 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int	main(void)
{
	int nb[] = {10, 2, 1, 0, -3};
	int power[] = {4, 2, 1, 0, -3};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		printf("%d power %d is %d\n", nb[i], power[j],
		ft_recursive_power(nb[i], power[j]));
	}
	return (0);
}
*/
