
#ifndef CUB3_H
# define CUB3_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int     ft_argument_error(int argc, char **argv);
int     ft_good_map(char *maps_name);

size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

# endif