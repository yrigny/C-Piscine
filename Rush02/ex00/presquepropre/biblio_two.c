/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:52:40 by ededemog          #+#    #+#             */
/*   Updated: 2023/08/20 22:41:20 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_getline(char *buff, char *line_tofind);
int		ft_atoi(char str[4]);
int		ft_printstop(char **array, int i_group, int group);
void	ft_decom(char *nb, char **array, int *group);
void	ft_print3digit(char str[4], char temp[4], char *buff);
void	ft_print2digit(char str[4], char *buff);
void	ft_printsep(char **array, int i_group, int group, char *buff);
void	ft_print(char **array, int group, char *buff);

void	ft_decom(char *nb, char **array, int *group)
{
	int	len;
	int	i;
	int	group_size;
	int	j;

	len = ft_strlen(nb);
	*group = 0;
	i = 0;
	while (i < len)
	{
		if ((len - i) % 3 == 0)
			group_size = 3;
		else
			group_size = (len - i) % 3 ;
		j = 0;
		while (j < group_size)
		{
			array[*group][j] = nb[i];
			j++;
			i++;
		}
		array[*group][j] = '\0';
		(*group)++;
	}
}

void	ft_print3digit(char str[4], char temp[4], char *buff)
{
	if (str[0] != '0')
	{
		temp[0] = str[0];
		ft_getline(buff, &temp[0]);
		write(1, " ", 1);
		ft_getline(buff, "100");
		if (!(str[1] == '0' && str[2] == '0'))
			write(1, " ", 1);
	}
	if (str[1] != '0')
	{
		if (str[1] == '1' || str[2] == '0')
			ft_getline(buff, &str[1]);
		else
		{
			temp[1] = str[1];
			temp[2] = '0';
			ft_getline(buff, &temp[1]);
			write(1, "-", 1);
			ft_getline(buff, &str[2]);
		}
	}
	if (str[1] == '0' && str[2] != '0')
		ft_getline(buff, &str[2]);
}

void	ft_print2digit(char str[4], char *buff)
{
	char	temp[3];

	temp[0] = '\0';
	temp[1] = '\0';
	temp[2] = '\0';
	if (str[0] == '1' || str[1] == '0')
		ft_getline(buff, str);
	else
	{
		temp[0] = str[0];
		temp[1] = '0';
		ft_getline(buff, temp);
		write(1, "-", 1);
		ft_getline(buff, &str[1]);
	}
}

void	ft_printsep(char **array, int i_group, int group, char *buff)
{
	int		zerocount;
	char	*sep;
	int		i;

	if (i_group == group - 1)
		return ;
	sep = (char *)malloc(sizeof(char) * 50);
	if (!sep)
		return ;
	sep[0] = '1';
	i = 0;
	while (++i <= 50)
		sep[i] = '\0';
	if (ft_atoi(array[i_group]) > 0)
	{
		write(1, " ", 1);
		zerocount = 3 * (group - i_group - 1);
		while (--zerocount >= 0)
			sep = ft_strcat(sep, "0");
		ft_getline(buff, sep);
	}
	free(sep);
}

void	ft_print(char **array, int group, char *buff)
{
	char	temp[4];
	int		i_group;

	i_group = 0;
	while (i_group <= group - 1)
	{
		if (ft_strlen(array[i_group]) == 1)
			ft_getline(buff, array[i_group]);
		if (ft_strlen(array[i_group]) == 2)
			ft_print2digit(array[i_group], buff);
		if (ft_strlen(array[i_group]) == 3 && ft_atoi(array[i_group]) > 0)
		{
			temp[0] = '\0';
			temp[1] = '\0';
			temp[2] = '\0';
			temp[3] = '\0';
			ft_print3digit(array[i_group], temp, buff);
		}
		ft_printsep(array, i_group, group, buff);
		if (i_group != group - 1 && ft_atoi(array[i_group + 1]) > 0)
			write(1, " ", 1);
		i_group++;
	}
}
