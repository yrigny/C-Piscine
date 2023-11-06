/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:44:48 by ededemog          #+#    #+#             */
/*   Updated: 2023/08/20 19:45:12 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	tab_size(char *input);
char	**create_tab(int size);

int	tab_size(char *input)
{
	int	size;

	size = 0;
	while (input[size])
		size++;
	if (size % 3 == 0)
		return (size / 3 + 1);
	else
		return (size / 3 + 2);
}

char	**create_tab(int size)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * size);
	while (i < size)
	{
		tab[i] = (char *)malloc(sizeof(char) * 4);
		i++;
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 'a';
			j++;
		}
		tab[i][3] = '\0';
		i++;
	}
	return (tab);
}
