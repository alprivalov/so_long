/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:37:47 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:37:48 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move_boss_ground(t_data *vars, int y, int x)
{
	vars->map[y][x] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss[0], IMG * x, IMG * y);
	vars->map[y][x + 1] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss[1], IMG * (x + 1), IMG * y);
	vars->map[y + 1][x] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss[2], IMG * x, IMG * (y + 1));
	vars->map[y + 1][x + 1] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss[3], IMG * (x + 1), IMG * (y + 1));
}
