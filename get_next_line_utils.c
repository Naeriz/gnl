/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moo <moo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:50:09 by moo               #+#    #+#             */
/*   Updated: 2024/12/06 15:29:00 by moo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&((char *)s)[i]);
}

char	*ft_cpystr(char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i] && s1[i - 1] != '\n')
	{
		i++;
	}
	s2 = malloc(i + 1);
	i = 0;
	while (s1[i] && s1[i - 1] != '\n')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*finals;
	int		s1m;
	int		s2m;
	int		len;

	s1m = 0;
	s2m = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	finals = malloc (sizeof(char) * (len + 1));
	if (!finals)
		return (NULL);
	while (s1[s1m])
	{
		finals[s1m] = s1[s1m];
		s1m++;
	}
	while (s2[s2m])
	{
		finals[s1m] = s2[s2m];
		s1m++;
		s2m++;
	}
	finals[s1m] = '\0';
	return (finals);
}
