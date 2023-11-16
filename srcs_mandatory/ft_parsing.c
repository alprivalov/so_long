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
	vars->lines = 0;
	vars->colonnes = 0;
	vars->e = 0;
	vars->c = 0;
	vars->p = 0;
	vars->error = 0;
	vars->pause = 0;
}

void	ft_small_check(t_data *vars)
{
	if (vars->colonnes < 3)
		vars->error++;
	if (vars->lines < 3)
		vars->error++;
}

void	ft_parsing_map(char *av, t_data *vars)
{
	char	*line;
	int		fd;

	fd = open(av, O_RDONLY);
	line = get_next_line(fd);
	vars->colonnes = ft_strlen(line) - 1;
	while (line != NULL)
	{
		free(line);
		line = get_next_line(fd);
		ft_check_error_parsing(line, vars);
		vars->lines++;
	}
	free(line);
	close(fd);
	ft_small_check(vars);
	if (vars->error != 0)
	{
		write(1, "Error\nwrong map\n", 17);
		exit(0);
	}
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
