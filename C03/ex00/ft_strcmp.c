/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:44:21 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/10 20:46:38 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char str1[] = "";
	char str2[] = "";

	int	r1 = strcmp(str1, str2);
	int	r2 = ft_strcmp(str1, str2);
	printf("%s\n%s\n", str1, str2);
	printf("result of strcmp: %d\nresult of ft_strcmp: %d\n", r1, r2);
}*/
