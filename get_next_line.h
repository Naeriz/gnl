/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moo <moo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:51:27 by moo               #+#    #+#             */
/*   Updated: 2024/12/06 16:07:04 by moo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_cpystr(char *s1);
char	*ft_fill_ex(char *excess);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_readline(int fd, char *excess);
char	*ft_replace(char *excess, char *all);
int		ft_strlen(char	*s);
int		ft_strchr(char *s, char c);

#endif