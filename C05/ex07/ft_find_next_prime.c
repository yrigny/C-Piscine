/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/14 19:24:28 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/14 21:00:41 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int test)
{
	int	divisor;

	if (test < 2)
		return (0);
	if (test == 2 || test == 3)
		return (1);
	if (test % 2 == 0)
		return (0);
	divisor = 3;
	while (divisor <= test / divisor)
	{
		if (test % divisor == 0)
			return (0);
		divisor += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	test;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 1)
		test = nb;
	if (nb % 2 == 0)
		test = nb + 1;
	while (test <= 2147483647)
	{
		if (ft_is_prime(test) == 1)
			return (test);
		test += 2;
	}
	return (0);
}

/*
int	main(void)
{
	int	nb[] = {1, 62, 100, 4242, 2147483647};
	int	next_prime;
	for (int i; i < 5; i++)
	{
		next_prime = ft_find_next_prime(nb[i]);
		printf("the next prime after %d is %d\n", nb[i], next_prime);
	}
	return (0);
}
*/
