/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:51:26 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/15 18:51:32 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

int	main(int argc, char **argv)
{
	char	**map;
	t_map	*data;
	int		x;

	x = 0;
	if (ft_argument_error(argc, argv) == -1)
		exit (-1);
	if (ft_valid_file(argv[1]) == -1)
		exit (-1);
	data = obtain_data(argv[1]);
	ft_confirm_data(data);
	if (data->segurity == -1)
		exit (-1);
	map = ft_created_map(argv[1], NULL);
	if (ft_valid_map(map, 0, 0, 0) == -1)
		exit (-1);
	printf(" the file is --> %s\n", argv[1]);
	printf(" the map is \n");
	while (map[x])
	{
		printf("%s\n", map[x]);
		x++;
	}
	ft_free(map);
	free(data);
}
