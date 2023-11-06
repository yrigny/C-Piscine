/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:08:56 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/17 16:05:48 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_sumlen(int size, char **strs, char *sep)
{
	int	i;
	int	strslen;

	i = 0;
	strslen = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		strslen += ft_strlen(strs[i]);
		i++;
	}
	return (strslen + (size - 1) * ft_strlen(sep));
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		totallen;
	int		i;
	int		j;

	totallen = ft_sumlen(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (totallen + 1));
	if (!res)
		return (0);
	*res = 0;
	if (size == 0)
		return (res);
	i = -1;
	j = 0;
	while (++i < size - 1)
	{
		ft_strcpy(&res[j], strs[i]);
		j += ft_strlen(strs[i]);
		ft_strcpy(&res[j], sep);
		j += ft_strlen(sep);
	}
	ft_strcpy(&res[j], strs[i]);
	res[totallen] = '\0';
	return (res);
}

/*
int	main(int argc, char **argv)
{
	char	*res;

	res = 0;
	if (argc > 1)
	{
		res = ft_strjoin(argc, argv, "_");
		printf("%s\n", res);
	}
	free(res);
	return (0);
}
*/
