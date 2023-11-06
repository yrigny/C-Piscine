/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/09 15:45:08 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			answer = 0;
		i++;
	}
	return (answer);
}

/*int	main(void)
{
	char str1[] = "1234567";
	char str2[] = "a6cd3f9";
	char str3[] = "";
	char *array_ptrs[3] = {str1, str2, str3};
	int answer;

	for(int i = 0; i < 3; i++)
	{
	printf("\"%s\" is ", array_ptrs[i]);
	answer = ft_str_is_numeric(array_ptrs[i]);
	if (answer == 1)
	printf("numeric or NULL\n");
	if (answer == 0)
	printf("not numeric\n");
	}
}*/
