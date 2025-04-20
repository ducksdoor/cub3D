/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_created_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:21:02 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/17 14:21:06 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

static char	*search_map(int fd)
{
	char	*line;
	char	*tmp;

	line = get_next_line(fd);
	while (line != NULL)
	{
		tmp = ft_strtrim(line, " 	");
		if (ft_strncmp(tmp, "1", 1) == 0)
		{
			free(tmp);
			break ;
		}
		free(line);
		line = get_next_line(fd);
		free(tmp);
	}
	return (line);
}

char	**ft_created_map(char *argv, char *aux)
{
	char	*line;
	int		fd;
	char	*tmp;
	char	**real_map;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = search_map(fd);
	while (line != NULL)
	{
		if (aux == NULL)
			aux = ft_strdup(line);
		else
		{
			tmp = ft_strjoin(aux, line);
			aux = tmp;
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	real_map = ft_split(aux, '\n');
	free(aux);
	return (real_map);
}
