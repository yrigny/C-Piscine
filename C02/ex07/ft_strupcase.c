/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/08 18:00:40 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "abcdefgz";
	char str2[] = "abcDEF9z";
	char str3[] = "1234567";
	char *array_ptrs[3] = {str1, str2, str3};
	char *after;

	for(int i = 0; i < 3; i++)
	{
	printf("Before, \"%s\"\n", array_ptrs[i]);
	after = ft_strupcase(array_ptrs[i]);
	printf("After,  \"%s\"\n", after);
	}
}*/
