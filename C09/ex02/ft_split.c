/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:56:58 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/23 13:57:03 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	countwords(char *str, char *charset)
{
	int	i;
	int	wordcount;

	wordcount = 0;
	if (!str[0])
		return (0);
	if (!issep(str[0], charset))
		wordcount += 1;
	i = 1;
	while (str[i])
	{
		if (!issep(str[i], charset) && issep(str[i - 1], charset))
			wordcount += 1;
		i++;
	}
	return (wordcount);
}

char	*copyword(char *src, char *charset, int *i)
{
	int		k;
	char	*dest;

	k = 0;
	while (issep(src[k], charset) == 0)
		k++;
	dest = malloc(sizeof(char) * (k + 1));
	if (!dest)
		return (0);
	k = 0;
	while (issep(src[k], charset) == 0)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	*i += k;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	char	**res;
	int		i;
	int		j;

	wordcount = countwords(str, charset);
	res = malloc(sizeof(char *) * (wordcount + 1));
	if (!res)
		return (0);
	*res = 0;
	i = 0;
	j = 0;
	while (str[i] != '\0' && j < wordcount)
	{
		while (issep(str[i], charset) == 1)
			i++;
		res[j] = copyword(&str[i], charset, &i);
		j++;
	}
	res[j] = 0;
	return (res);
}
/*
int	main(void)
{
	char	*str;
	char	*charset;
	char	**res;
	int		i;

	str = " fuck the  fucking ft split  ";
	charset = "/";
	res = ft_split(str, charset);
	i = -1;
	while (++i < ?)
		printf("%s\n", res[i]);
	free (res);
	return (0);
}*/
