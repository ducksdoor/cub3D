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

char	*ft_created_map(char *argv)
{
	char	*line;
	int		fd;
	char	*aux;
	char	*tmp;

	aux = NULL;
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = get_next_line(fd);
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
	return (aux);
}
