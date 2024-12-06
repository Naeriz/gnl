/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moo <moo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:50:12 by moo               #+#    #+#             */
/*   Updated: 2024/12/06 15:37:01 by moo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fill_ex(char *line, char *excess)
{
	char	*next_line;
	int		i;
	int		j;

	i = ft_strlen(line);
	j = 0;
	next_line = malloc(ft_strlen(excess) - ft_strlen(line) + 1);
	while (excess[i])
	{
		next_line[j++] = excess[i++];
	}
	next_line[j] = '\0';
	free(excess);
	return (next_line);
}

char	*ft_replace(char *excess, char *all)
{
	char	*join;

	join = ft_strjoin(excess, all);
	free(excess);
	return (join);
}

char	*ft_readline(int fd, char *excess)
{
	char	*all;
	int		endcheck;

	all = malloc(BUFFER_SIZE + 1);
	all[0] = '\0';
	if (!excess)
	{
		excess = malloc(1);
		excess[0] = '\0';
	}
	while (endcheck != 0 && ft_strchr(all, '\n')
	!= 1 && ft_strchr(excess, '\n') != 1)
	{
		endcheck = read (fd, all, BUFFER_SIZE);
		if (endcheck < 0)
		{
			free(all);
			return (NULL);
		}
		all[endcheck] = '\0';//putting '\0' bcs read doesnt put and will crash
		excess = ft_replace(excess, all);
	}
	free (all);
	return (excess);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*excess;

	excess = ft_readline(fd, excess);
	if (!excess)
		return (NULL);
	line = ft_cpystr(excess);
	excess = ft_fill_ex(line, excess);
	return (line);
}
