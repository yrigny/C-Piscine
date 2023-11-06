/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:16:54 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/03 18:11:25 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int digit)
{
	char	c;

	c = '0' + digit;
	write(1, &c, 1);
}

void	ft_printnbr(int unsign_nb)
{
	if (unsign_nb > 9)
	{
		ft_printnbr(unsign_nb / 10);
		ft_putchar(unsign_nb % 10);
	}
	else
	{
		ft_putchar(unsign_nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_printnbr(-nb);
	}
	else
	{
		ft_printnbr(nb);
	}
}

/*int	main(void)
{
	ft_putnbr(-42);
	return (0);
}*/
