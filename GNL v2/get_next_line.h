/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:53 by makoch-l          #+#    #+#             */
/*   Updated: 2024/04/12 18:37:47 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 50
# endif

int		ft_strlen(char *str);
int		ft_strchr(char *stash, char c);
char	*ft_strdup(char *src);
char	*fill_line(char *tmp);
char	*get_next_line(int fd);
char	*ft_strjoin(char *stash, char *buffer);
char	*read_fd(char *stash, int fd);
char	*get_next_line(int fd);
void	shift_stash(char *stash);

#endif
