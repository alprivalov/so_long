/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stone_wall_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:52 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:53 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_stone_wall_init(t_data *vars, int y, int x)
{
	if (vars->map[y - 1][x] == 'W' && vars->map[y][x - 1] == 'W')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oioiioooo_s_wl, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'W' && vars->map[y][x + 1] == 'W')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiiooo_s_wl, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'W' && vars->map[y + 1][x] == 'W' &&
	ft_house(vars, y, x + 1) && ft_ext_house(vars, y, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_l_s_wl, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'W' && vars->map[y + 1][x] == 'W' &&
	ft_house(vars, y, x - 1) && ft_ext_house(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_r_s_wl, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'W' && vars->map[y][x + 1] == 'W')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiioio_s_wl, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'W' && vars->map[y][x - 1] == 'W')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiooio_s_wl, IMG * x, IMG * y);
	else
		ft_stone_wall_init_two(vars, y, x);
}

void	ft_stone_wall_init_two(t_data *vars, int y, int x)
{
	if ((vars->map[y][x + 1] == 'W' || vars->map[y][x + 1] == 'M') &&
	(vars->map[y][x - 1] == 'W' || vars->map[y][x - 1] == 'M'))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_s_wl, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'W' && (vars->map[y][x + 1] == 'c' ||
	vars->map[y][x + 1] == '5'))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_s_wl, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'W' && (vars->map[y][x - 1] == 'c' ||
	vars->map[y][x - 1] == '5'))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_s_wl, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'W' && ft_house(vars, y + 1, x) &&
	ft_house(vars, y, x - 1) && ft_house(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooioooo_s_wl, IMG * x, IMG * y);
	else
		ft_stone_wall_init_three(vars, y, x);
}

void	ft_stone_wall_init_three(t_data *vars, int y, int x)
{
	if (vars->map[y + 1][x] == 'W' && ft_house(vars, y - 1, x) &&
	ft_house(vars, y, x - 1) && ft_house(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiooio_s_wl, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'W' && vars->map[y + 1][x] == 'W' &&
	ft_house(vars, y, x - 1) && ft_house(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_mid_s_wl, IMG * x, IMG * y);
	else
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_s_wl, IMG * x, IMG * y);
}
