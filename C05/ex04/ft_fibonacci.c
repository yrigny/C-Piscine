/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:01:55 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/14 17:17:31 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	int index[] = {-4, 0, 1, 2, 6};
	printf("first 10 fibonacci nbrs: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34\n");
	for (int i = 0; i < 5; i++)
		printf("nbr at index %d is %d\n", index[i],
		ft_fibonacci(index[i]));
	return (0);
}
*/
