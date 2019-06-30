/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:36:01 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/30 14:09:18 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

static int	ft_readline(int fd, char **buffer, int buffer_size)
{
	char	*tmp_hold;
	char	my_buffer[BUFF_SIZE + 1];
	ssize_t	my_read;

	my_read = read(fd, my_buffer, buffer_size);
	if (my_read < 1)
		return (my_read);
	my_buffer[my_read] = '\0';
	tmp_hold = ft_strjoin(*buffer, my_buffer);
	free(*buffer);
	*buffer = ft_strdup(tmp_hold);
	free(buffer);
	return (1);
}

static int	ft_linechar(char *s, char c)
{
	int i;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);	
}

int			get_next_line(const int fd, char **line)
{
	static char *buffer;
	int  my_read;

	buffer = NULL;
	if (buffer == NULL)
		buffer = (char *)malloc(sizeof(char));
	while ((ft_strchar(buffer, '\n')) == NULL)
	{
		my_read = ft_readline(fd, &buffer, BUFF_SIZE);
		if (my_read < 1)
			return (my_read);
	}
	*line = ft_strsub(buffer, 0, ft_linechar(buffer, '\n'));
	buffer = ft_strchar(buffer, '\n');
	buffer++;
	return (1);
}

int main(void)
{
	char *buffer;
	buffer = (char *)malloc(sizeof(char) * 1024);
	int fd = open("get_next_line.h", O_RDONLY);
	int g = get_next_line(fd, &buffer);
	ft_putendl(buffer);
	ft_putnbr(g);
	return (0);
}
