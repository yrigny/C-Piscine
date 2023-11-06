/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:25:28 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/07 21:04:39 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			while (j < size)
			{
				if (tab[i] > tab[j])
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
		}
	}
}

/*int	main(void)
{
	int	array1[5] = {1, 2, 3, 4, 5};
	int	array2[4] = {45, 20, 100, 9};
	int	array3[5] = {10, 9, 8, 7, 6};
	int* 	array_ptrs[3] = {array1, array2, array3};
	int	sizes[3] = {5, 4, 5};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < sizes[i]; j++)
		{
			printf("%d ", array_ptrs[i][j]);
		}
		printf("\n");
		ft_sort_int_tab(array_ptrs[i], sizes[i]);
		for (int j = 0; j < sizes[i]; j++)
		{
			printf("%d ", array_ptrs[i][j]);
		}
		printf("\n");
	}
	return (0);
}*/
