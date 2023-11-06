/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/09 16:17:54 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a])
	{
		a++;
	}
	if (size < 1)
		return (a);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (a);
}

/*int	main(void)
{
	char src[] = "abcd";
	char dest[] = "efghijkl";
	unsigned int length;
	printf("src: %s\n", src);
	printf("dest before strlcpy: %s\n", dest);
	length = ft_strlcpy(dest, src, 5);
	printf("dest after strlcpy:  %s, length copied: %d\n", dest, length);
	if (strcmp(src, dest) == 0)
		printf("dest and src are equal.\n");
	else
		printf("dest and src are not equal.\n");
}*/
