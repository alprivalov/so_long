/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:48:39 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:48:41 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_check_texture_six(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'D')
		ft_dungeon_init(vars, y, x);
	else if (vars->map[y][x] == 'N')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'l')
		ft_boss_init(vars, y, x);
	else if (vars->map[y][x] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dragon_g,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == '9')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->skeleton,
			IMG * x, IMG * y);
}
