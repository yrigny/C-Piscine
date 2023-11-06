/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/09 15:48:37 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			answer = 0;
		i++;
	}
	return (answer);
}

/*int	main(void)
{
	char str1[] = "ABCDEFG\n";
	char str2[] = "ABCDEFG";
	char str3[] = "";
	char *array_ptrs[3] = {str1, str2, str3};
	int answer;

	for(int i = 0; i < 3; i++)
	{
	printf("\"%s\" is ", array_ptrs[i]);
	answer = ft_str_is_printable(array_ptrs[i]);
	if (answer == 1)
	printf("%d: printable or NULL\n", answer);
	if (answer == 0)
	printf("%d: not printable\n", answer);
	}
}*/
