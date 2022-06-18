/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:15 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:16 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_vars(t_data *vars)
{
	vars->n_chests = 0;
	vars->n_chestopen = 0;
	vars->move = 0;
	vars->lines = 0;
	vars->colonnes = 0;
	vars->frames = 0;
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

int	ft_parsing_map(char *av, t_data *vars)
{
	char	*line;
	int		fd;
	int		i;

	i = 0;
	fd = open(av, O_RDONLY);
	line = get_next_line(fd);
	vars->colonnes = ft_strlen(line) - 1;
	while (line != NULL)
	{
		free(line);
		line = get_next_line(fd);
		if (ft_check_error_parsing(line, vars) == 0)
		{
			close(fd);
			free(line);
			return (0);
		}
		vars->lines++;
	}
	free(line);
	close(fd);
	if (vars->colonnes < 3)
		return (0);
	if (vars->lines < 3)
		return (0);
	return (1);
}

void	ft_init_map(char *str, t_data *vars)
{
	int	i;
	int	fd;

	i = 0;
	fd = open(str, O_RDONLY);
	vars->map = malloc(sizeof(char *) * vars->lines);
	vars->map[i] = get_next_line(fd);
	i++;
	while (i < vars->lines)
	{
		vars->map[i] = get_next_line(fd);
		i++;
	}
}
