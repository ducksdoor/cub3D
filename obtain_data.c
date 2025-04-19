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

static int	ft_segurity_numbers(char **numbers)
{
	int		x;
	int		temp;

	x = 0;
	while (numbers[x])
		x++;
	if (x > 3)
	{
		ft_print_error(" Excesive numbers for colors...(0,0,0)");
		return (-1);
	}
	if (x < 3)
	{
		ft_print_error(" need more numbers for colors...(0,0,0)");
		return (-1);
	}
	x = 0;
	while (numbers[x])
	{
		temp = atoi(numbers[x]);
		if ((ft_charisdigit(numbers[x]) == -1) || temp < 0 || temp > 255)
		{
			ft_print_error(" Problems with colors numbers");
			return (-1);
		}
		x++;
	}
	return (1);
}

static int	ft_control_color(t_map *data, char *line)
{
	char	**numbers;
	int		x;
	int		tmp;

	numbers = ft_split(line, ',');
	x = 0;
	if (ft_segurity_numbers(numbers) == -1)
	{
		free(line);
		ft_free(numbers);
		exit (-1);
		printf("-->noentiendonada\n");
	}
	while (numbers[x])
		x++;
	if (ft_strncmp(line, "F", 1) == 0)
		data->f = line;
	if (ft_strncmp(line, "C", 1) == 0)
	{
		data->c = line;
		printf("-->%s\n", data->c);
	}
	free(line);
	ft_free(numbers);
	return (1);
}

t_map	*obtain_data(char *argv)
{
	int		fd;
	char	*line;
	char	*tmp;
	t_map	*data;

	data = ft_init_t_map();
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (data);
	line = get_next_line(fd);
	while (line != NULL)
	{
		tmp = ft_strtrim(line, " 	");
		if (ft_strncmp(tmp, "NO", 2) == 0)
			data->no = tmp;
		else if (ft_strncmp(tmp, "SO", 2) == 0)
			data->so = tmp;
		else if (ft_strncmp(tmp, "WE", 2) == 0)
			data->we = tmp;
		else if (ft_strncmp(tmp, "EA", 2) == 0)
			data->ea = tmp;
		else if (ft_compare_char(tmp[0], "FC") == 1)
		{
			if (ft_control_color(data, tmp) == -1)
			{
				data->segurity = -1;
				ft_print_error(" The colors of F or C no is good.");
				exit (-1);
			}
		}
		else
			free(tmp);
		free(line);
		line = get_next_line(fd);
	}

	close (fd);
	return(data);
}
