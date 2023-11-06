/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:42:34 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/13 22:58:27 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_isvalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_printnbr(int nbr, int len_base, char *base)
{
	if (nbr <= -len_base || nbr >= len_base)
	{
		ft_printnbr(nbr / len_base, len_base, base);
		if (nbr < 0)
			write(1, &base[-(nbr % len_base)], 1);
		else
			write(1, &base[nbr % len_base], 1);
	}
	else if (nbr < 0 && nbr > -len_base)
	{
		write(1, "-", 1);
		write(1, &base[-nbr], 1);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (ft_base_isvalid(base) == 1)
	{
		len_base = 0;
		while (base[len_base])
			len_base++;
		ft_printnbr(nbr, len_base, base);
	}
}

/*int	main(void)
{
	int	nbr = 2147483647;
	char	*base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	return 0;
}*/
