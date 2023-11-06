/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:17:57 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/10 16:08:38 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
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
        char    src[] = "";
	unsigned int	nb = 3;

	printf("dest \"%s\"\nsrc \"%s\"\nnb = %d\n", dest1, src, nb);
	printf("ft_strcat result \"%s\"\n", ft_strncat(dest1, src, nb));
	printf("strcat result \"%s\"\n", strncat(dest2, src, nb));
	return (0);
}*/
