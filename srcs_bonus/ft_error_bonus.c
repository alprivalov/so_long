/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:35:37 by alprival          #+#    #+#             */
/*   Updated: 2022/06/26 03:35:41 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_error(t_data *vars)
{
	int	i;

	i = vars->lines - 1;
	if (vars->win != NULL)
		mlx_destroy_window(vars->mlx, vars->win);
	write(1, "Error\nmap error\n", 17);
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

void	ft_check_error_parsing(char *str, t_data *vars)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (str != NULL && str[ft_strlen(str) - 1] == '\n')
	{
		if (vars->colonnes != len && str != NULL)
			vars->error++;
	}
	else if (vars->colonnes - 1 != len && str != NULL)
		vars->error++;
}

int	ft_check_name_file(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[--len] == 'r')
		if (str[--len] == 'e')
			if (str[--len] == 'b')
				if (str[--len] == '.')
					if (len != 0 && str[--len] != '/')
						return (0);
	return (1);
}

int	checks_error_argument(int ac, char *str)
{
	int	fd;

	if (ac != 2)
	{
		write(1, "Error\ntoo many arguments or no arguments, try again\n", 53);
		return (0);
	}
	if (ft_check_name_file(str) == 1)
	{
		write(1, "Error\nwrong file type, try again\n", 34);
		return (0);
	}
	fd = open(str, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error\nfile doesn't exist\n", 26);
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}
