/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:53:36 by makoch-l          #+#    #+#             */
/*   Updated: 2024/04/09 14:56:42 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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