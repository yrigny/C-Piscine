/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_transformation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:45:40 by ededemog          #+#    #+#             */
/*   Updated: 2023/08/20 22:30:17 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	what_is_it(char c);
int	sign_input(char *str);
int	size_input(char *str);
char		*ft_atoa(char *str);

int	what_is_it(char c)
{
	int	result;

	result = 0;
	if ((c >= 9 && c <= 13) || c == ' ')
		result = 1;
	if (c >= '0' && c <= '9')
		result = 2;
	if (c == '+' || c == '-')
		result = 3;
	return (result);
}

int	sign_input(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (what_is_it(str[i]) == 1 && str[i] != '\0')
		i++;
	while (what_is_it(str[i]) == 3 && str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (sign);
}

int	size_input(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	while (what_is_it(str[i]) == 1 && str[i] != '\0')
		i++;
	while (what_is_it(str[i]) == 3 && str[i] != '\0')
		i++;
	while (what_is_it(str[i]) == 2)
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_atoa(char *str)
{
	int		i;
	char	*result;
	int		size;
	char	*ptr;

	i = 0;
	if (sign_input(str) == -1)
		return (NULL);
	size = size_input(str);
	result = (char *)malloc(sizeof(char) * (unsigned int)size);
	while ((what(str[i]) == 1 || what(str[i]) == 3) && str[i] != '\0')
		i++;
	ptr = &str[i];
	i = 0;
	while (i < size - 1)
	{
		result[i] = ptr[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
