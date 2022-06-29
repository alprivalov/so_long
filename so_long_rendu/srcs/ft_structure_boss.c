/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_tree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:09 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:11 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_boss_init(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'l' && vars->map[y + 1][x] == 'l')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss[0], IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'l' && vars->map[y][x - 1] == 'l')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss[1], IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'l' && vars->map[y][x + 1] == 'l')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss[2], IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'l' && vars->map[y][x - 1] == 'l')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss[3], IMG * x, IMG * y);
}
