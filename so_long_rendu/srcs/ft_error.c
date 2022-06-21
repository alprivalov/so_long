#include "so_long.h"

int	ft_error(t_data *vars)
{
	int	i;

	i = vars->lines -1;
	if(vars->win != NULL)
		mlx_destroy_window(vars->mlx, vars->win);
	printf("map error\n");
	while (i >= 0)
	{	
		free(vars->map[i]);
		i--;
	}
	free(vars->map);
	ft_destroy_all(vars);
	exit(0);
	return (0);
}

int	ft_check_error_parsing(char *str, t_data *vars)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (str != NULL && str[ft_strlen(str) - 1] == '\n')
	{
		if (vars->colonnes != len && str != NULL)
			return (0);
	}
	else if (vars->colonnes - 1 != len && str != NULL)
		return (0);
	return (1);
}

int	ft_check_name_file(char *str)
{
	int len;

	len = ft_strlen(str) - 1;
	if (str[len] == 'r')
	{
		len--;
		if (str[len] == 'e')
		{
			len--;
			if (str[len] == 'b')
			{
				len--;
				if (str[len] == '.')
					len--;
				else 
					return (1);
			}
			else 
				return (1);
		}
		else 
			return (1);
	}
	else 
		return (1);
	return (0);
}

int checks_error_argument(int ac, char * str)
{
	int fd;

	if (ac != 2)
	{
		printf("too many arguments or no arguments, try again\n");
		return (0);
	}
	if(ft_check_name_file(str) == 1)
	{
		printf("wrong file type, try again\n");
		return(0);
	}
	fd = open(str, O_RDONLY);
	if (fd < 0)
	{
		printf("file doesn't exist\n");
		close(fd);
		return (0);
	}
	close(fd);
	return(1);
}