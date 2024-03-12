/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:46 by makoch-l          #+#    #+#             */
/*   Updated: 2024/03/07 16:16:14 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int		fd;
	char	*line;

	fd = open("tests/two_lines_with_nl", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line = NULL)
			break;
		printf("%s", line);
		free(line);
	}
	return (0);
}