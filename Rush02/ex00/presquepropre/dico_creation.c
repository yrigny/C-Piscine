/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico_creation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:46:01 by ededemog          #+#    #+#             */
/*   Updated: 2023/08/20 22:28:30 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		txt_size(char *txt);
char	*create_dico(char *txt);

int	txt_size(char *txt)
{
	int	fd;
	char	*buff;
	int	size;
	int	bytes_read;

	size = 0;
	fd = open(txt, 0);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	buff = (char *)malloc(sizeof(char));
	while (1)
	{
		bytes_read = read(fd, buff, 1);
		if (bytes_read == -1)
			return (-1);
		if (bytes_read == 0)
			break ;
		size++;
	}
	free(buff);
	close(fd);
	if (size <= 1)
		return (-1);
	return (size);
}

char	*create_dico(char *txt)
{
	int	fd;
	int	size;
	int	bytes_read;
	char	*buff;

	size = txt_size(txt);
	if (size == -1)
		return (NULL);
	*buff = (char *)malloc(sizeof(char) * size);
	fd = open(txt, 0);
	if (fd == -1)
		return (NULL);
	buff[0] = '\n';
	bytes_read = read(fd, &buff[1], size - 1);
	buff[size] = '\0';
	close(fd);
	return (buff);
}
