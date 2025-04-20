/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_confirm_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:05:31 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/20 14:05:33 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

void	ft_confirm_data(t_map *data)
{
	if (data->no == NULL || data->so == NULL)
	{
		ft_print_error(" NO or So bad define.");
		data->segurity = -1;
	}
	if (data->we == NULL || data->ea == NULL)
	{
		ft_print_error(" WE or EA bad define.");
		data->segurity = -1;
	}
	if (data->f == NULL || data->c == NULL)
	{
		ft_print_error(" F or C bad define.");
		data->segurity = -1;
	}
}
