/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:25:28 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/07 20:22:27 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	if (size > 0)
	{
		i = 0;
		while (i < size / 2)
		{
			temp = tab[i];
			tab[i] = tab[size - 1 - i];
			tab[size - 1 - i] = temp;
			i++;
		}
	}
}

/*int	main(void)
{
	int	array1[5] = {1, 2, 3, 4, 5};
	int	array2[4] = {6, 7, 8, 9};
	int	array3[5] = {-5, -4, -3, -2, -1};
	int* 	array_ptrs[3] = {array1, array2, array3};
	int	sizes[3] = {5, 4, 5};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < sizes[i]; j++)
		{
			printf("%d ", array_ptrs[i][j]);
		}
		printf("\n");
		ft_rev_int_tab(array_ptrs[i], sizes[i]);
		for (int j = 0; j < sizes[i]; j++)
		{
			printf("%d ", array_ptrs[i][j]);
		}
		printf("\n");
	}
	return (0);
}*/
