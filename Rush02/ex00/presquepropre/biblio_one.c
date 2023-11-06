/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:51:11 by ededemog          #+#    #+#             */
/*   Updated: 2023/08/20 22:32:42 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int			ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
void		ft_getline(char *buff, char *line_tofind);
int			ft_atoi(char str[4]);
int			ft_printstop(char **array, int i_group, int group);

void		ft_decom(char *nb, char **array, int *group);
void		ft_print3digit(char str[4], char temp[4], char *buff);
void		ft_print2digit(char str[4], char *buff);
void		ft_printsep(char **array, int i_group, int group, char *buff);
void		ft_print(char **array, int group, char *buff);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

void	ft_getline(char *buff, char *line_tofind)
{
	int	i;
	int	j;

	i = 1;
	while (buff[i] != '\0')
	{
		j = 0;
		if (buff[i] == line_tofind[j] && buff[i - 1] == '\n')
		{
			while (buff[i] == line_tofind[j])
			{
				if (!line_tofind[j + 1] && (buff[i + 1] < '0'
						|| buff[i + 1] > '9'))
				{
					i += 1;
					while (buff[i++] == ' ' || buff [i-1] == ':')
						while (buff[i++] != '\n')
						{
							while (buff[i++-1] == ' ' && buff[i - 3] == ' ')
							write(1, &buff[i-2], 1);
						}
				}
				i++;
				j++;
			}
		}
		i++;
	}
}
/*
void	ft_getline(char *buff, char *line_tofind)
{
	int	i;
	int	j;

	i = 1;
	while (buff[i] != '\0')
	{
		j = 0;
		if (buff[i] == line_tofind[j] && buff[i - 1] == '\n')
		{
			while (buff[i] == line_tofind[j])
			{
				if (!line_tofind[j + 1] && (buff[i + 1] < '0'
						|| buff[i + 1] > '9'))
				{
					i += 1;
					while (buff[i] == ' ' || buff[i] == ':')
						i++;
					while (buff[i] != '\n')
					{
						while (buff[i] == ' ' && buff[i - 1] == ' ')
							i++;
						write(1, &buff[i], 1);
						i++;
					}
				}
				i++;
				j++;
			}
		}
		i++;
	}
}*/

int	ft_atoi(char str[4])
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (str[i])
	{
		value += 10 * value + str[i] - '0';
		i++;
	}
	return (value);
}

int	ft_printstop(char **array, int i_group, int group)
{
	i_group += 1;
	while (i_group <= group - 1)
	{
		if (ft_atoi(array[i_group]) > 0)
			return (0);
		i_group++;
	}
	return (1);
}
