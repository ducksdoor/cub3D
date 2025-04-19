/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obtain_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:09:50 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/19 14:09:54 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

t_map	*ft_init_t_map(void)
{
	t_map	*data;

	data = malloc(sizeof(t_map));
	data->no = NULL;
	data->so = NULL;
	data->we = NULL;
	data->ea = NULL;
	data->f = NULL;
	data->c = NULL;
	return(data);
}

t_map  *obtain_data(char *argv)
{
	int		fd;
	char	*line;
	t_map	*data;

	data = ft_init_t_map();
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (data);
	line = get_next_line(fd);
	while (line != NULL)
	{
		if (ft_strncmp(line, "NO", 2))
			data->no = line;
		else if (ft_strncmp(line, "SO", 2))
			data->so = line;
		else if (ft_strncmp(line, "WE", 2))
			data->we = line;
		else if (ft_strncmp(line, "EA", 2))
			data->ea = line;
		else if (ft_strncmp(line, "F", 2))
			data->f = line;
		else if (ft_strncmp(line, "C", 2))
			data->c = line;
		free(line);
		line = get_next_line(fd);
	}
	close (fd);
	return(data);
}
