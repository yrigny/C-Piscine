/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:17:57 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/12 18:02:15 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	j;

	j = 0;
	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (len_src + size);
	while (len_dest + j < size - 1 && src[j])
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_src + len_dest);
}

/*int	main(void)
{
	char	dest1[16] = "ancde";
	char	dest2[16] = "abcde";
	char	src[] = "abcd";
	unsigned int	size = 0;

	printf("dest \"%s\"\nsrc \"%s\"\nsize = %d\n", dest1, src, size);
	printf("ft_strlcat result \"%d\"\n", ft_strlcat(dest1, src, size));
	printf("strlcat result \"%ld\"\n", strlcat(dest2, src, size));
	return (0);
}*/
