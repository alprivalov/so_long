/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slimbiome_init.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:45 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:46 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_slimbiome_init_four(t_data *vars, int y, int x)
{
	if (ft_ext_sb_two(vars, y - 1, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiiiiiiii_sb, IMG * x, IMG * y);
	else if (ft_ext_sb_two(vars, y - 1, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iioiiiiii_sb, IMG * x, IMG * y);
	else if (ft_ext_sb_two(vars, y + 1, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiioii_sb, IMG * x, IMG * y);
	else if (ft_ext_sb_two(vars, y + 1, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiio_sb, IMG * x, IMG * y);
	else
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiii_sb, IMG * x, IMG * y);
}

void	ft_slimbiome_init(t_data *vars, int y, int x)
{
	if (ft_int_sb(vars, y - 1, x) && ft_cave(vars, y, x + 1)
		&& ft_cave(vars, y, x - 1) && ft_ext_sb(vars, y + 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiooo_sb, IMG * x, IMG * y);
	else if (ft_int_sb(vars, y, x - 1) && vars->map[y + 1][x] == 'G' &&
	vars->map[y - 1][x] == 'G' && ft_ext_sb(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iioiioiio_sb, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'G' && vars->map[y - 1][x] == 'G' &&
	ft_ext_sb(vars, y + 1, x) && ft_ext_sb(vars, y, x + 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iioiioooo_sb, IMG * x, IMG * y);
	else if (ft_int_sb(vars, y, x + 1) && vars->map[y + 1][x] == 'G' &&
	vars->map[y - 1][x] == 'G' && ft_ext_sb(vars, y, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiioiioii_sb, IMG * x, IMG * y);
	else
		ft_slimbiome_init_two(vars, y, x);
}

void	ft_slimbiome_init_two(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'G' && vars->map[y - 1][x] == 'G' &&
	ft_ext_sb(vars, y + 1, x) && ft_ext_sb(vars, y, x - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiioiiooo_sb, IMG * x, IMG * y);
	else if (ft_int_sb(vars, y + 1, x) && vars->map[y][x + 1] == 'G' &&
	vars->map[y][x - 1] == 'G' && ft_ext_sb(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiiii_sb, IMG * x, IMG * y);
	else if (vars->map[y][x - 1] == 'G' && vars->map[y + 1][x] == 'G' &&
	ft_ext_sb(vars, y, x + 1) && ft_ext_sb(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiioiio_sb, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'G' && vars->map[y + 1][x] == 'G' &&
	ft_ext_sb(vars, y, x - 1) && ft_ext_sb(vars, y - 1, x))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiioii_sb, IMG * x, IMG * y);
	else
		ft_slimbiome_init_three(vars, y, x);
}

void	ft_slimbiome_init_three(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'Y' && vars->map[y + 1][x] == 'M' &&
	vars->map[y - 1][x] == 'U' && vars->map[y][x - 1] == 'G')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->enter_l_sb, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'G' && vars->map[y + 1][x] == 'M' &&
	vars->map[y - 1][x] == 'U' && vars->map[y][x - 1] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->enter_r_sb, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'Y' && vars->map[y + 1][x] == 'U' &&
	vars->map[y - 1][x] == 'M' && vars->map[y][x - 1] == 'G')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->enter_l_sb_b, IMG * x, IMG * y);
	else if (vars->map[y][x + 1] == 'G' && vars->map[y + 1][x] == 'U' &&
	vars->map[y - 1][x] == 'M' && vars->map[y][x - 1] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->enter_r_sb_bottom, IMG * x, IMG * y);
	else
		ft_slimbiome_init_four(vars, y, x);
}
