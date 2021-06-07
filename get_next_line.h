/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:34:23 by amidoyan          #+#    #+#             */
/*   Updated: 2021/02/10 16:35:49 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# define FD 65536

char	*ft_strjoin(char *memory, char *buffer);
int		ft_strlen(const char *s);
int		is_next_line(char *str);
char	*new_line(char *memory);
char	*f(char *string);
int		get_next_line(int fd, char **line);

#endif
