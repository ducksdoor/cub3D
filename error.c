/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:51:10 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/15 18:51:14 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

int	ft_good_map(char *maps_name)
{
	int	x;

	x = ft_strlen (maps_name) - 4;
	if (ft_strncmp (maps_name + x, ".cub", 4) != 0)
	{
		ft_print_error(" The maps no is: \".cub\"");
		return (-1);
	}
	return (1);
}

int	ft_argument_error(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
			ft_print_error(" Need 2 argument. You dont put a map!");
		if (argc > 2)
			ft_print_error(" The program alone use 2 argument. No more. -.- ");
		return (-1);
	}
	if (ft_good_map(argv[1]) == -1)
		return (-1);
	return (1);
}
