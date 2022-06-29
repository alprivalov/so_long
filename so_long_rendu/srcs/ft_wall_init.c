/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:18 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:21 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_wall_init(t_data *vars, int y, int x)
{
	if (vars->map[y + 1][x] == 'F' && vars->map[y][x + 1] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiioio_wall, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'F' && vars->map[y][x - 1] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiooio_wall, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'F' && vars->map[y][x + 1] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiiooo_wall, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'F' && vars->map[y][x - 1] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oioiioooo_wall, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'F' && vars->map[y - 1][x] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_wall, IMG * x, IMG * y);
	else
		ft_wall_init_two(vars, y, x);
}

void	ft_wall_init_two(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'F' && vars->map[y][x - 1] == 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_wall, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'F' && vars->map[y - 1][x] != 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiooio_wall, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'F' && vars->map[y][x + 1] != 'F' &&
	vars->map[y - 1][x] != 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiioooo_wall, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'F' && vars->map[y][x - 1] != 'F' &&
	vars->map[y - 1][x] != 'F')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiiooo_wall, IMG * x, IMG * y);
	else
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooioooo_wall, IMG * x, IMG * y);
}
