/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:51:37 by makoch-l          #+#    #+#             */
/*   Updated: 2024/03/14 19:47:23 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#endif

# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

typedef struct	s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
t_list	*ft_lst_get_last(t_list *stash);
int		found_newline(t_list *stash);
int		ft_strlen(const char *str);
void	generate_line(char **line, t_list *stash);
void	free_stash(t_list *stash);
void	clean_stash(t_list **stash);
void	extract_line(t_list *stash, char **line);
void	read_and_stash(int fd, t_list **stash);
void	add_to_stash(t_list **stash, char *buffer, int readed);