/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boss_spawn_spirit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:35:55 by alprival          #+#    #+#             */
/*   Updated: 2022/06/30 01:35:56 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_boss_spawning_animation(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_spawn[vars->frames_boss],
		IMG * x, IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_spawn[vars->frames_boss + 1],
		IMG * (x + 1), IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_spawn[vars->frames_boss + 2],
		IMG * x, IMG * (y + 1));
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_spawn[vars->frames_boss + 3],
		IMG * (x + 1), IMG * (y + 1));
	vars->frames_boss += 4;
	if (vars->frames_boss >= 16)
	{
		vars->frames_boss = 0;
		vars->boss_spawn_status = 0;
	}
}

void	ft_boss_spawn_spirit_two(t_data *vars, int y, int x, int random)
{
	if (random >= 2 && random < 4 && vars->map[y + 2][x] == 'N'
		&& (y != vars->p_y && x != vars->p_x))
	{
		vars->map[y + 2][x] = 's';
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->spirit, IMG * x, IMG * (y + 2));
	}
	if (random >= 0 && random < 2 && vars->map[y - 1][x] == 'N'
		&& (y != vars->p_y && x != vars->p_x))
	{
		vars->map[y - 1][x] = 's';
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->spirit, IMG * x, IMG * (y - 1));
	}
}

void	ft_boss_spawn_spirit(t_data *vars, int y, int x, int random)
{
	vars->boss_spawn_status = 1;
	ft_boss_spawning_animation(vars, y, x);
	if (random >= 6 && random <= 8 && vars->map[y][x + 2] == 'N'
		&& (y != vars->p_y && x != vars->p_x))
	{
		vars->map[y][x + 2] = 's';
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->spirit, IMG * (x + 2), IMG * y);
	}
	if (random >= 4 && random < 6 && vars->map[y][x - 1] == 'N'
		&& (y != vars->p_y && x != vars->p_x))
	{
		vars->map[y][x - 1] = 's';
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->spirit, IMG * (x - 1), IMG * y);
	}
	ft_boss_spawn_spirit_two(vars, y, x, random);
}
