/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:24:41 by md-aless          #+#    #+#             */
/*   Updated: 2022/02/09 11:37:52 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_insert(int fd, char *backup)
{
	int		bytes;
	char	*buff;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(backup, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		backup = ft_strjoin(backup, buff);
	}
	free (buff);
	return (backup);
}

char	*ft_line(char *backup)
{
	char	*string;
	int		i;

	i = 0;
	if (!backup[i])
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	string = (char *)malloc(sizeof(char) * (i + 2));
	if (!string)
		return (NULL);
	i = 0;
	while (backup[i] && backup[i] != '\n')
	{
		string[i] = backup[i];
		i++;
	}
	if (backup[i] == '\n')
	{
		string[i] = backup[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_backup(char *b)
{
	int		x;
	int		j;
	char	*temp;

	x = 0;
	j = 0;
	while (b[x] && b[x] != '\n')
		x++;
	if (!b[x])
	{
		free(b);
		return (NULL);
	}
	temp = (char *)malloc(sizeof(char) * ft_strlen(b) - x + 1);
	if (!temp)
		return (NULL);
	x++;
	while (b[x])
		temp[j++] = b[x++];
	temp[j] = '\0';
	free(b);
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*static_buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buff = ft_insert(fd, static_buff);
	if (!static_buff)
		return (NULL);
	str = ft_line(static_buff);
	static_buff = ft_backup(static_buff);
	return (str);
}
