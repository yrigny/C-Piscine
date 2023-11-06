/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/16 20:21:05 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/16 23:14:31 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	i = 0;
	n = min;
	while (i < max - min)
	{
		(*range)[i] = n;
		i++;
		n++;
	}
	return (max - min);
}

/*
int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*tab;
	int	size = ft_ultimate_range(&tab, min, max);
	int	i = -1;

	while (++i < size)
		printf("%d ", tab[i]);
	free(tab);
	return (0);
}
*/
