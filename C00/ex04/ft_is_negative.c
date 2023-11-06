/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:14:25 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/04 20:44:34 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c1;
	char	c2;

	c1 = 'N';
	c2 = 'P';
	if (n < 0)
	{
		write(1, &c1, 1);
	}
	else
	{
		write(1, &c2, 1);
	}
}