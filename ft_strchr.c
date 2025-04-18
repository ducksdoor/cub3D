/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:36:52 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/16 11:36:54 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

int	ft_strchr(const char *s, int c)
{
	int		x;
	int		y;

	if (!s)
		return (0);
	x = 0;
	y = ft_strlen(s);
	while (x <= y)
	{
		if (s[x] == (char)c)
		{
			return (1);
		}
		++x;
	}
	return (0);
}
