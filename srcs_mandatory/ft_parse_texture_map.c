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

#include "so_long.h"

int	ft_wall(t_data *vars, int y, int x)
{
	if (vars->map[y][x] != '1')
		return (1);
	return (0);
}

void	ft_increase_p_c_e(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'P')
		vars->p++;
	if (vars->map[y][x] == 'C')
		vars->c++;
	if (vars->map[y][x] == 'E')
		vars->e++;
}

int	ft_error_diff_object(t_data *vars, int y, int x)
{
	if (vars->map[y][x] != 'E' && vars->map[y][x] != '1' &&
	vars->map[y][x] != 'C' && vars->map[y][x] != 'P' &&
	vars->map[y][x] != '0' )
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
	if ((vars->p < 1 || vars->c == 0 || vars->e < 1))
		ft_error(vars);
	vars->map[vars->p_y][vars->p_x] = '0';
}
