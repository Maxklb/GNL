/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:01:12 by makoch-l          #+#    #+#             */
/*   Updated: 2024/04/24 15:09:33 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"

int	main(void)
{

	//programme pour get_next_line_bonus
	/*
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("tests/two_lines_with_nl",O_RDONLY);
	fd2 = open("tests/three_lines_with_nl",O_RDONLY);

	line1 = get_next_line(fd1);
	printf("%s", line1);
	free(line1);

	line1 = get_next_line(fd1);
	printf("%s\n", line1);
	free(line1);
	
	line2 = get_next_line(fd2);
	printf("%s", line2);
	free(line2);*/

	//programme pour get_next_line
	
	int		fd1;
	char	*line1;

	fd1 = open("tests/three_lines_with_nl", O_RDONLY);
	
	while(1)
	{
		line1 = get_next_line(fd1);
		printf("%s", line1);
		if (line1 == NULL)
			break;
		free(line1);
	}
	return (0);
}