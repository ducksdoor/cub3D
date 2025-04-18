/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:20:51 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/17 15:20:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3.h"

static int	ft_word_count(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			j++;
			while ((str[i] != '\0') && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int	ft_word_len(char const *str, char c, int index)
{
	int	i;

	i = 0;
	while (str[index + i] != c && str[index + i] != '\0')
		i++;
	return (i);
}

static char	**ft_free_split(char **split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	split = (char **)malloc (sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!(split))
		return (0);
	while (j < ft_word_count(s, c))
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, ft_word_len(s, c, i));
		if (!(split[j]))
			return (ft_free_split(split, j));
		j++;
		i += ft_word_len(s, c, i);
	}
	split[j] = 0;
	return (split);
}
