/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/08 14:01:45 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			answer = 0;
		i++;
	}
	return (answer);
}

/*int	main(void)
{
	char str1[] = "abcDefgz";
	char str2[] = "ABCDEFGZ";
	char str3[] = "";
	char *array_ptrs[3] = {str1, str2, str3};
	int answer;

	for(int i = 0; i < 3; i++)
	{
	printf("\"%s\" is ", array_ptrs[i]);
	answer = ft_str_is_uppercase(array_ptrs[i]);
	if (answer == 1)
	printf("uppercase or NULL\n");
	if (answer == 0)
	printf("not uppercase\n");
	}
}*/
