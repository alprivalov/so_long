/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_texture_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:05 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:06 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_increase_p_c_e(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'P')
		vars->p++;
	if (vars->map[y][x] == 'C')
		vars->c++;
	if (vars->map[y][x] == 'c' || vars->map[y][x] == 'E' )
		vars->e++;
}

int	ft_wall(t_data *vars, int y, int x)
{
	if (vars->map[y][x] != '1' && vars->map[y][x] != 'D')
		return (1);
	return (0);
}

int	ft_error_diff_object(t_data *vars, int y, int x)
{
	if (vars->map[y][x] != 'E' && vars->map[y][x] != '2' &&
	vars->map[y][x] != 'C' && vars->map[y][x] != 'P' &&
	vars->map[y][x] != '0' && vars->map[y][x] != '1' &&
	vars->map[y][x] != 'U' && vars->map[y][x] != 'Y' &&
	vars->map[y][x] != 'M' && vars->map[y][x] != 'A' &&
	vars->map[y][x] != 'G' && vars->map[y][x] != 'J' &&
	vars->map[y][x] != '7' && vars->map[y][x] != 'W' &&
	vars->map[y][x] != 'S' && vars->map[y][x] != 'H' &&
	vars->map[y][x] != 'Z' && vars->map[y][x] != '8' &&
	vars->map[y][x] != '6' && vars->map[y][x] != 'V' &&
	vars->map[y][x] != 'Q' && vars->map[y][x] != 'B' &&
	vars->map[y][x] != '9' && vars->map[y][x] != 'N' &&
	vars->map[y][x] != 'c' && vars->map[y][x] != 'l' &&
	vars->map[y][x] != 'I' && vars->map[y][x] != 'D' &&
	vars->map[y][x] != 'L' && vars->map[y][x] != 'T' &&
	vars->map[y][x] != 'F' && vars->map[y][x] != 'X' &&
	vars->map[y][x] != '5' && vars->map[y][x] != 'K')
		return (0);
	if ((y == 0 && ft_wall(vars, y, x)) || (y == (vars->lines - 1)
			&& ft_wall(vars, y, x)) || (x == 0 && ft_wall(vars, y, x))
		|| (x == (vars->colonnes - 1) && ft_wall(vars, y, x)))
		return (0);
	return (1);
}

void	ft_init_map_texture(t_data *vars)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	while (y < vars->lines)
	{
		while (x < vars->colonnes)
		{
			ft_increase_p_c_e(vars, y, x);
			if (ft_error_diff_object(vars, y, x) == 0)
				ft_error(vars);
			ft_check_texture(vars, y, x);
			x++;
		}
		if (x != vars->colonnes)
			ft_error(vars);
		x = 0;
		y++;
	}
	if ((vars->p < 1 || vars->c < 1 || vars->e < 1) && vars->dungeon == 0)
		ft_error(vars);
	vars->map[vars->p_y][vars->p_x] = '0';
}
