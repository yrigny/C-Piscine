/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:09:52 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/10 22:30:53 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char str1[] = "abcdefg";
	char str2[] = "\n";
	char str3[] = "";
	char *array_str[3] = {str1, str2, str3};

	for (int n = 0; n < 3; n++)
	{
		printf("string: \"%s\"\n", array_str[n]);
		printf("ft_strlen result: %d\n", ft_strlen(array_str[n]));
		printf("   strlen result: %ld\n", strlen(array_str[n]));
	}
}*/
