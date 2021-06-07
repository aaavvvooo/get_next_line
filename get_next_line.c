/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:28:01 by amidoyan          #+#    #+#             */
/*   Updated: 2021/02/10 16:28:35 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*string[FD];
	int			size;

	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	size = 1;
	while ((size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[size] = '\0';
		string[fd] = ft_strjoin(string[fd], buff);
		if (is_next_line(string[fd]))
			break ;
	}
	free(buff);
	if (size < 0)
		return (-1);
	*line = new_line(string[fd]);
	string[fd] = f(string[fd]);
	if (size == 0 && !string[fd])
		return (0);
	return (1);
}
