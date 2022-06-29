/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_dungeon.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:37:29 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:37:30 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_dungeon_init(t_data *vars, int y, int x)
{
	if (y == 0 && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooooiooi_d_wl, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iooiooooo_d_wl, IMG * x, IMG * y);
	else if (y == 0 && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiooioo_d_wl, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooiooiooo_d_wl, IMG * x, IMG * y);
	else
		ft_dungeon_init_two(vars, y, x);
}

void	ft_dungeon_init_two(t_data *vars, int y, int x)
{
	if (y == 0 && (x > 0 && x < vars->colonnes - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiiii_d_wl, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && (x > 0 && x < vars->colonnes - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiooo_d_wl, IMG * x, IMG * y);
	else if ((y > 0 && y < vars->lines - 1) && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_l_d_wl, IMG * x, IMG * y);
	else if ((y > 0 && y < vars->lines - 1) && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_r_d_wl, IMG * x, IMG * y);
}
