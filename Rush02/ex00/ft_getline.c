/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/08/19 16:57:30 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/08/20 16:29:27 by yrigny           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

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

void	ft_getline(char *buff, char* line_tofind)
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
				if (!line_tofind[j + 1] && (buff[i + 1] < '0' || buff[i + 1] > '9'))
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
}

int	ft_atoi(char str[4])
{
	int	i;
	int	value;

	while (str[i])
	{
		value += 10 * value + str[i] - '0';
		i++;
	}
	return (value);
}

int	ft_printstop(char array[20][4], int i_group, int group)
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

void	ft_decom(char *nb, char array[10][4], int *group)
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
			group_size = (len - i) % 3;
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
	printf("array line 0 status: %s\n", array[0]);
}

void	ft_print3digit(char str[4], char temp[4], char *buff)
{
	if (str[0] != '0')
	{
		temp[0] = str[0];
		ft_getline(buff, &temp[0]);
		write(1, " ", 1);
		ft_getline(buff, "100");
	}
	if (str[1] != '0')
	{
		write(1, " ", 1);
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
	{
		write(1, " ", 1);
		ft_getline(buff, &str[2]);
	}
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

void	ft_printsep(char array[20][4], int i_group, int group, char *buff)
{
	int	zerocount;
	char	*sep;
	int	i;

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
		while (--zerocount >=  0)
			sep = ft_strcat(sep, "0");
		ft_getline(buff, sep);
	}
//	if (ft_printstop(array, i_group, group) != 1)
//		write(1, " ", 1);
	free(sep);
}

void	ft_print(char array[20][4], int group, char *buff)
{
	char	temp[4];
	int	i_group;

	temp[0] = '\0';
	temp[1] = '\0';
	temp[2] = '\0';
	temp[3] = '\0';
	i_group = 0;
	while (i_group <= group - 1)
	{
		if (ft_strlen(array[i_group]) == 1)
			ft_getline(buff, array[i_group]);
		if (ft_strlen(array[i_group]) == 2)
			ft_print2digit(array[i_group], buff);
		if (ft_strlen(array[i_group]) == 3 && ft_atoi(array[i_group]) > 0)
			ft_print3digit(array[i_group], temp, buff);
		ft_printsep(array, i_group, group, buff);
		i_group++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*buff;
	int		bytesrd;
	char	array[20][4] = {0};
	int	group;

	if (argc < 2)
		return 0;
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	if (argc == 3)
		fd = open(argv[2], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return 1;
	}
	buff = malloc(sizeof(char) * 1024);
	if (!buff)
		return 0;
	buff[0] = '\n';
	bytesrd = read(fd, &buff[1], 691);
//	printf("buff:\n%s\n", buff);
	close(fd);
	if (bytesrd != -1)
	{
		if (argc == 2)
			ft_decom(argv[1], array, &group);
		if (argc == 3)
			ft_decom(argv[2], array, &group);
//		printf("%s", array[0]);
		ft_print(array, group, buff);
	}
	free(buff);
	return 0;
}
