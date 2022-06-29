/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_water_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:29 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:30 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_water_init(t_data *vars, int y, int x)
{
	if (vars->map[y - 1][x] == 'Z' && vars->map[y + 1][x] == 'Z' &&
	vars->map[y][x - 1] == 'Z' && vars->map[y][x + 1] == 'Z')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiii_w, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'Z' && vars->map[y][x + 1] == 'Z' &&
	vars->map[y][x - 1] == 'Z' && ft_ext_w(vars, y + 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiooo_w, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'Z' && vars->map[y + 1][x] == 'Z' &&
	vars->map[y - 1][x] == 'Z' && ft_ext_w(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iioiioiio_w, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'Z' && vars->map[y - 1][x] == 'Z' &&
	ft_ext_w(vars, y + 1, x) && ft_ext_w(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iioiioooo_w, IMG * x, IMG * y);
	else
		ft_water_init_two(vars, y, x);
}

void	ft_water_init_two(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'Z' && vars->map[y + 1][x] == 'Z' &&
	vars->map[y - 1][x] == 'Z' && ft_ext_w(vars, y, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiioiioii_w, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'Z' && vars->map[y - 1][x] == 'Z' &&
	ft_ext_w(vars, y + 1, x) && ft_ext_w(vars, y, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiioiiooo_w, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'Z' && vars->map[y][x + 1] == 'Z' &&
	vars->map[y][x - 1] == 'Z' && ft_ext_w(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiiii_w, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'Z' && vars->map[y + 1][x] == 'Z' &&
	ft_ext_w(vars, y, x + 1) && ft_ext_w(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiioiio_w, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'Z' && vars->map[y + 1][x] == 'Z' &&
	ft_ext_w(vars, y, x - 1) && ft_ext_w(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiioii_w, IMG * x, IMG * y);
}
