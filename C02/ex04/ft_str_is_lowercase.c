/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/08 13:43:07 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			answer = 0;
		i++;
	}
	return (answer);
}

/*int	main(void)
{
	char str1[] = "abcdefgz";
	char str2[] = "aBcDeF9z";
	char str3[] = "";
	char *array_ptrs[3] = {str1, str2, str3};
	int answer;

	for(int i = 0; i < 3; i++)
	{
	printf("\"%s\" is ", array_ptrs[i]);
	answer = ft_str_is_lowercase(array_ptrs[i]);
	if (answer == 1)
	printf("lowercase or NULL\n");
	if (answer == 0)
	printf("not lowercase\n");
	}
}*/
