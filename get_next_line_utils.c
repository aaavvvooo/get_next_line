/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:28:47 by amidoyan          #+#    #+#             */
/*   Updated: 2021/02/10 16:33:45 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *string, char *buff)
{
	char	*result;
	int		i;
	int		j;

	if (!(result = malloc(sizeof(char) *
					(ft_strlen(string) + ft_strlen(buff) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	if (string)
		while (string[i] != '\0')
			result[j++] = string[i++];
	i = 0;
	if (buff)
		while (buff[i] != '\0')
			result[j++] = buff[i++];
	result[j] = '\0';
	free(string);
	return (result);
}

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*new_line(char *string)
{
	char	*temp;
	int		i;

	i = 0;
	while (string && string[i] != '\0' && string[i] != '\n')
		i++;
	if (!(temp = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (string && string[i] != '\0' && string[i] != '\n')
	{
		temp[i] = string[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*f(char *string)
{
	char	*temp;
	int		length;
	int		i;
	int		j;

	i = 0;
	if (!string)
		return (NULL);
	while (string[i] != '\0' && string[i] != '\n')
		i++;
	if (string[i] == '\0')
	{
		free(string);
		return (NULL);
	}
	length = ft_strlen(string) - i;
	if (!(temp = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	i++;
	j = 0;
	while (string[i] != '\0')
		temp[j++] = string[i++];
	temp[j] = '\0';
	free(string);
	return (temp);
}

int		is_next_line(char *string)
{
	int		i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
