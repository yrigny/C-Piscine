/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/16 20:21:05 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/16 20:51:48 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	n;
	int	i;

	if (min >= max)
		return (0);
	res = (int *)malloc(sizeof(int) * (max - min));
	if (!res)
		return (0);
	i = 0;
	n = min;
	while (i < max - min)
	{
		res[i] = n;
		i++;
		n++;
	}
	return (res);
}

/*
int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*res = ft_range(min, max);
	int	i = 0;

	if (res == 0)
	{
		printf("range failed\n");
		return (1);
	}
	else
	{
		printf("range created:\n");
		while (i < max - min)
		{
			printf("%d ", res[i]);
			i++;
		}
	}
	free(res);
	return (0);
}
*/
