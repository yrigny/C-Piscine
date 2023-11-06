/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/14 15:31:01 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/14 19:53:54 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (nb - 1 >= 1)
	{
		res *= nb - 1;
		nb--;
	}
	return (res);
}

/*
int	main(void)
{
	int nb[] = {5, 2, 1, 0, -3};
	for (int i = 0; i < 5; i++)
		printf("%d! is %d\n", nb[i], ft_iterative_factorial(nb[i]));
	return (0);
}
*/
