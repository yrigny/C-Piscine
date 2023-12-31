/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:12:43 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/15 00:23:23 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 1)
	{
		while (argc > 1)
		{
			i = 0;
			while (argv[argc - 1][i])
			{
				write(1, &argv[argc - 1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
