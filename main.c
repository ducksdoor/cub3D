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
	char	*map;

	if (ft_argument_error(argc, argv) == -1)
		exit (-1);
	if (ft_valid_file(argv[1]) == -1)
		exit (-1);
	map = ft_created_map(argv[1]);
	if (ft_valid_map(map, 0, 0) == -1)
		exit (-1);
	printf(" the file is --> %s\n", argv[1]);
	printf(" the map is \n%s \n", map);
	free(map);
}
