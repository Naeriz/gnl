/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moo <moo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:51:27 by moo               #+#    #+#             */
/*   Updated: 2024/12/04 21:33:52 by moo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, char c);
char	*cpystr(char *s1, char *s2);
char	*ft_fill_ex(char *all, char *line, char *excess);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char	*s);

#endif