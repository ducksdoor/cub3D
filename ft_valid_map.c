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
	if (flag == 37)
	{
		ft_print_error(" incorret char ...");
		return (-1);
	}
	else if (flag != 1)
	{
		ft_print_error(" open map");
		return (-1);
	}
	else if (flag != 1)
	{
		ft_print_error(" You forget include players -> (N/S/E/W)");
		return (-1);
	}
	return (1);
}

//convertir esto en split y funcionar desde ahí
int	ft_valid_map(char *map, int x, int flag)
{
	while (map[x])
	{
		if (map[x] == 'N' || map[x] == 'S' || map[x] == 'E' || map[x] == 'W')
		{
			flag++;
			x++;
		}
		else if (map[x] == '1' || map[x] == '0'
			|| map[x] == ' ' || map[x] == '\n')
			x++;
		else
			return (ft_comprobated_flag(37));
	}
	return (ft_comprobated_flag(flag));
}
