/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:02:29 by yrigny            #+#    #+#             */
/*   Updated: 2023/08/09 16:09:16 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex1;
	char	hex2;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			hex1 = '0' + (str[i] - '\0') / 16;
			write(1, &hex1, 1);
			if ((str[i] - '\0') % 16 > 9)
				hex2 = (str[i] - '\0') % 16 + 87;
			else
				hex2 = '0' + (str[i] - '\0') % 16;
			write(1, &hex2, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char str[2] = {'a', 127};
	ft_putstr_non_printable(str);
}*/

/*int	main(void)
{
	char str1[] = "ABC\n";
	char str2[] = "A\tBC";
	char str3[] = "Coucou\ntu vas bien ?";
	char *array_ptrs[3] = {str1, str2, str3};

	for(int i = 0; i < 3; i++)
	{
	printf("\"%s\"\n", array_ptrs[i]);
	ft_putstr_non_printable(array_ptrs[i]);
	}
}*/
