/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charisdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 00:45:05 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/20 00:45:07 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

int	ft_charisdigit(char *nmb)
{
	int	x;

	x = 0;
	if (nmb == NULL || nmb[0] == '\0')
	{
		ft_print_error(" Problems with colors numbers");
		return (-1);
	}
	while (nmb[x])
	{
		if (nmb[x] < '0' || nmb[x] > '9')
		{
			printf("doy fallo en -> %c\n", nmb[x]);
			return (-1);
		}
		x++;
	}
	return (0);
}
