/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:56:44 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/17 15:56:49 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

static int	ft_comprobated_flag(int flag)
{
	if (flag == -37)
	{
		ft_print_error(" incorret char ...");
		return (-1);
	}
	else if (flag == -42)
	{
		ft_print_error(" the map stay open");
		return (-1);
	}
	else if (flag != 1)
	{
		ft_print_error(" You forget include players -> (N/S/E/W)");
		return (-1);
	}
	return (1);
}

int	ft_valid_map(char **map, int x, int y, int flag)
{
	while (map[x])
	{
		while (map[x][y])
		{
			if (ft_compare_char(map[x][y], "NSEW") == 1)
			{
				flag++;
				y++;
			}
			else if (ft_compare_char(map[x][y], "1 \n") == 1)
				y++;
			else if (map[x][y] == '0')
			{
				if (ft_closed_map(map, x, y) == -1)
					return (ft_comprobated_flag(-42));
				y++;
			}
			else
				return (ft_comprobated_flag(-37));
		}
		y = 0;
		x++;
	}
	return (ft_comprobated_flag(flag));
}
