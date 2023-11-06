/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/08 17:58:22 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i] = str[i] + ' ';
			else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i] = str[i] + ' ';
			else if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + ' ';
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "123 hello woRlD 42paris";
	char str2[] = "pIscIne-42 IS cooL!";
	char str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *array_ptrs[3] = {str1, str2, str3};
	char *after;

	for(int i = 0; i < 3; i++)
	{
	printf("Before, \"%s\"\n", array_ptrs[i]);
	after = ft_strcapitalize(array_ptrs[i]);
	printf("After,  \"%s\"\n", after);
	}
}*/
