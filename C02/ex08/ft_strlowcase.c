/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/08 18:01:10 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "ABCDEFGZ";
	char str2[] = "ABCdef9Z";
	char str3[] = "1234567";
	char *array_ptrs[3] = {str1, str2, str3};
	char *after;

	for(int i = 0; i < 3; i++)
	{
	printf("Before, \"%s\"\n", array_ptrs[i]);
	after = ft_strlowcase(array_ptrs[i]);
	printf("After,  \"%s\"\n", after);
	}
}*/
