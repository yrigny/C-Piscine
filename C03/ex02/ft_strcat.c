/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:17:57 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/10 15:02:34 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
        char    dest1[100] = "abcd";
	char	dest2[100] = "abcd";
        char    src[] = "efg";

	printf("src \"%s\"\ndest \"%s\"\n", src, dest1);
	printf("ft_strcat result \"%s\"\n", ft_strcat(dest1, src));
	printf("strcat result \"%s\"\n", strcat(dest2, src));
	return (0);
}*/
