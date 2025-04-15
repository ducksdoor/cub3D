
#include "cub3.h"

int ft_good_map(char *maps_name)
{
	int	x;

	x = ft_strlen (maps_name) - 4;
	if (ft_strncmp (maps_name + x, ".cub", 4) != 0)
	{
		printf ("*****\n");
		printf("\n The maps no is: \".cub\" \n");
		printf ("\n*****\n");
		return (-1);
	}
	return (1);
}

int ft_argument_error(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
		{
			printf ("*****\n");
			printf("\n Need 2 argument. You dont put a map! \n");
			printf ("\n*****\n");
		}
		if (argc > 2)
		{
			printf ("*****\n");
			printf("\n The program alone use 2 argument. No more. -.- \n");
			printf ("\n*****\n");
		}
		return (-1);
	}
	if (ft_good_map(argv[1]) == -1)
		return (-1);
	return(1);
}