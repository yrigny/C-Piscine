/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:29:10 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/14 22:58:48 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 1)
	{
		i = 0;
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	return (0);
}
