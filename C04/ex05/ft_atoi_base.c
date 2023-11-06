/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:56:17 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/13 21:04:24 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] < 33 || base[i] > 126))
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

int	ft_get_len_base(char *base)
{
	int	n;

	n = 0;
	if (ft_base_is_valid(base) == 1)
	{
		while (base[n])
			n++;
		return (n);
	}
	return (0);
}

int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	res;
	int	len_base;

	i = 0;
	j = 1;
	res = 0;
	len_base = ft_get_len_base(base);
	if (len_base < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (ft_is_base(str[i], base) == 1)
	{
		res = res * len_base + ft_value(str[i], base);
		i++;
	}
	return (res * j);
}

/*int	main(void)
{
	char	str[] = "  +-80000000abc";
	char	base[] = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}*/
