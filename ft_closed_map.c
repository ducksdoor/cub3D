/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closed_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:16:07 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/19 13:16:10 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

int ft_closed_map(char **map, int x, int y)
{
	int size;

	size = 0;
	while (map[size])
		size++;
	if (x == size -1)
		return (-1);
	if (x == 0)
		return (-1);
	else if (ft_compare_char(map[x - 1][y], "10NSEW") == -1)
		return (-1);
	else if (ft_compare_char(map[x + 1][y], "10NSEW") == -1)
		return (-1);
	else if (ft_compare_char(map[x][y - 1], "10NSEW") == -1)
		return (-1);
	else if (ft_compare_char(map[x][y + 1], "10NSEW") == -1)
		return (-1);
	return (1);
}
