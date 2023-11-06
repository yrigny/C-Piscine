/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:29:03 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/12 17:51:25 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "abcdefg";
	char	str3[] = "abcd";

	printf("ft_strncmp \"%s\", \"%s\", 0: %d\n", str1, str2,
	ft_strncmp(str1, str2, 0));
	printf("strncmp    \"%s\", \"%s\", 0: %d\n", str1, str2, strncmp(str1,
	str2,0));
	printf("ft_strncmp \"%s\", \"%s\", 3: %d\n", str2, str3,
	ft_strncmp(str2, str3, 3));
	printf("strncmp    \"%s\", \"%s\", 3: %d\n", str2, str3, strncmp(str2,
	str3, 3));
	printf("ft_strncmp \"%s\", \"%s\", 8: %d\n", str2, str3,
	ft_strncmp(str2, str3, 8));
	printf("strncmp    \"%s\", \"%s\", 8: %d\n", str2, str3, strncmp(str2,
	str3, 8));
}*/
