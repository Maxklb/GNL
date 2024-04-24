/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:23:57 by makoch-l          #+#    #+#             */
/*   Updated: 2024/04/24 15:06:16 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line_bonus.h"

char	*fill_line(char *tmp)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1) + 1);
	if (!line)
		return (NULL);
	while (j <= i)
	{
		line[j] = tmp[j];
		j++;
	}
	line[j] = '\0';
	free(tmp);
	return (line);
}

void	shift_stash(char *stash)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		stash[0] = '\0';
		return ;
	}
	while (stash[i + j])
	{
		stash[j] = stash[i + j + 1];
		j++;
	}
	stash[j] = '\0';
	return ;
}

char	*read_fd(char *stash, int fd)
{
	int		i;
	char	*tmp;

	tmp = ft_strdup(stash);
	while (!ft_strchr(tmp, '\n'))
	{
		i = read(fd, stash, BUFFER_SIZE);
		if (i <= 0)
			return (tmp);
		stash[i] = '\0';
		tmp = ft_strjoin(tmp, stash);
	}
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	stash[1024][BUFFER_SIZE + 1] = {{'\0'}};
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	tmp = read_fd(stash[fd], fd);
	if (!stash[fd][0])
	{
		free(tmp);
		return (NULL);
	}
	line = fill_line(tmp);
	shift_stash(stash[fd]);
	return (line);
}
