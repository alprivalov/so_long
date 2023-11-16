/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boss_death.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:36:05 by alprival          #+#    #+#             */
/*   Updated: 2022/06/30 01:36:09 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_spawn_exit(t_data *vars, int y, int x)
{
	vars->frames_boss = 0;
	vars->boss_status = 0;
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl,
		IMG * x, IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl,
		IMG * (x + 1), IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl,
		IMG * x, IMG * (y + 1));
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl,
		IMG * (x + 1), IMG * (y + 1));
	vars->map[y][x] = 'N';
	vars->map[y][x + 1] = 'N';
	vars->map[y + 1][x] = 'N';
	vars->map[y + 1][x + 1] = 'N';
	vars->map[vars->lines / 2][vars->colonnes / 2] = 'E';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->dragon_d,
		IMG * (vars->colonnes / 2), IMG * (vars->lines / 2));
}

void	ft_boss_death(t_data *vars, int y, int x)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss_death[vars->frames_boss],
			IMG * x, IMG * y);
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss_death[vars->frames_boss + 1],
			IMG * (x + 1), IMG * y);
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss_death[vars->frames_boss + 2],
			IMG * x, IMG * (y + 1));
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->boss_death[vars->frames_boss + 3],
			IMG * (x + 1), IMG * (y + 1));
		vars->frames_boss += 4;
		if (vars->frames_boss >= 24)
			ft_spawn_exit(vars, y, x);
	}
}
