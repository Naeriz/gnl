/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moo <moo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:50:12 by moo               #+#    #+#             */
/*   Updated: 2024/12/04 21:47:48 by moo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fill_ex(char *all, char *line, char *excess)
{
	int		i;
	int		j;

	i = ft_strlen(line);
	j = 0;
	excess = malloc(ft_strlen(all) - ft_strlen(line) + 1);
	while (all[i])
	{
		excess[j++] = all[i++];
	}
	excess[j] = '\0';
	return (excess);
}

char	*get_next_line(int fd)
{
	char		*all;
	char		*line;
	static char	*excess;
	int			endcheck;

	all = malloc(BUFFER_SIZE + 1);
	all[0] = '\0';
	while (1)
	{
		endcheck = read (fd, all, BUFFER_SIZE);
		if (endcheck < 0)
			return (NULL);
		if (ft_strchr(all, '\n') || endcheck == 0)
		{
			if (excess == NULL)
			{
				line = ft_cpystr(all);
				excess = ft_fill_ex(all, line, excess);
			}
			else
			{
				line = ft_cpystr(all);
				line = ft_strjoin(excess, line);
			}
		}
	}
	return (line);
}
