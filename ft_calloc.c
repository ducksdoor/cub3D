/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:36:52 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/16 11:36:54 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*des;

	if (size > 0 && count > ULONG_MAX / size)
		return (NULL);
	des = (void *)malloc(count * size);
	if (des == NULL)
		return (NULL);
	ft_bzero (des, count * size);
	return (des);
}