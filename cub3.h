/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:51:26 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/15 18:51:32 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3_H
# define CUB3_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_argument_error(int argc, char **argv);
int		ft_good_map(char *maps_name);
int		ft_valid_file(char *argv);
char	*ft_created_map(char *argv);
void	ft_print_error(char *text);
int		ft_valid_map(char *map, int x, int flag);

char	*get_next_line(int fd);
char	*ft_clean_line(char **rest, char **buffer);

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, unsigned int n);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);

char	**ft_split(char const *s, char c); //
void	ft_free(char **lst); //

#endif