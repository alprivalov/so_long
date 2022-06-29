/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plains_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:25 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:26 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_plains_init(t_data *vars, int y, int x)
{
	if (y == 0 && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooooiioio_p, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oioiioooo_p, IMG * x, IMG * y);
	else if (y == 0 && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiooio_p, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiiooo_p, IMG * x, IMG * y);
	else
		ft_plains_init_two(vars, y, x);
}

void	ft_plains_init_two(t_data *vars, int y, int x)
{
	if (y == 0 && (x > 0 && x < vars->colonnes - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_t_p, IMG * x, IMG * y);
	else if (y == vars->lines - 1 && (x > 0 && x < vars->colonnes - 1))
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooiiiooo_b_p, IMG * x, IMG * y);
	else if ((y > 0 && y < vars->lines - 1) && x == 0)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_l_p, IMG * x, IMG * y);
	else if ((y > 0 && y < vars->lines - 1) && x == vars->colonnes - 1)
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiooiooio_r_p, IMG * x, IMG * y);
}
