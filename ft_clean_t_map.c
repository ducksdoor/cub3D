/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_t_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 00:16:53 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/20 00:16:55 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

void	*ft_clean_t_map(t_map *data)
{
	free (data->no);
	free (data->so);
	free (data->we);
	free (data->ea);
	free (data->f);
	free (data->c);
}
