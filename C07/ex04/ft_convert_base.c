/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:24:41 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/17 23:43:38 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_base_isvalid(char *base);
int	ft_get_len_base(char *base);
int	ft_value(char c, char *base);
int	ft_is_base(char c, char *base);

long	ft_atoi_base(char *str, char *base_from)
{
	int		i;
	int		j;
	long	dec;
	int		len_base_from;

	i = 0;
	j = 1;
	dec = 0;
	len_base_from = ft_get_len_base(base_from);
	if (len_base_from < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (ft_is_base(str[i], base_from) == 1)
	{
		dec = dec * len_base_from + ft_value(str[i], base_from);
		i++;
	}
	return (dec * j);
}

void	ft_putnbr(int nbr, char *base, char *res, int *i)
{
	int	len_base;

	len_base = ft_get_len_base(base);
	if (nbr <= -len_base || nbr >= len_base)
	{
		ft_putnbr(nbr / len_base, base, res, i);
		if (nbr < 0)
			res[*i] = base[-(nbr % len_base)];
		else
			res[*i] = base[nbr % len_base];
		*i += 1;
	}
	else if (nbr < 0 && nbr > -len_base)
	{
		res[*i] = '-';
		*i += 1;
		res[*i] = base[-nbr];
		*i += 1;
	}
	else
	{
		res[*i] = base[nbr];
		*i += 1;
	}
	res[*i] = '\0';
}

int	ft_reslen(int dec, int len_base)
{
	int	reslen;

	reslen = 1;
	while (dec >= len_base || dec <= -len_base)
	{
		reslen += 1;
		dec /= len_base;
	}
	if (dec < 0)
		reslen += 1;
	return (reslen);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	char	*res;
	int		len_base_to;
	int		reslen;
	int		i;

	i = 0;
	if (!(ft_base_isvalid(base_from) && ft_base_isvalid(base_to)))
		return (0);
	dec = ft_atoi_base(nbr, base_from);
	len_base_to = ft_get_len_base(base_to);
	reslen = ft_reslen(dec, len_base_to);
	res = (char *)malloc(sizeof(char) * (reslen + 1));
	if (!res)
		return (0);
	ft_putnbr(dec, base_to, res, &i);
	return (res);
}

/*int	main(void)
{
	char	*nbr = "  ++-80000000ppp";
	char	*base_from = "0123456789ABCEDF";
	char	*base_to = "9";
	char	*res = ft_convert_base(nbr, base_from, base_to);

	printf("%s\n", res);
	free(res);
	return (0);
}*/
