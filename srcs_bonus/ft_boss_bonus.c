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

void	ft_move_boss(t_data *vars, int y, int x, int random)
{
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl, IMG * x, IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl, IMG * (x + 1), IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl, IMG * x, IMG * (y + 1));
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->iiiiiiiii_d_wl, IMG * (x + 1), IMG * (y + 1));
	vars->map[y][x] = 'N';
	vars->map[y][x + 1] = 'N';
	vars->map[y + 1][x] = 'N';
	vars->map[y + 1][x + 1] = 'N';
	if (random >= 90 && random <= 100 && x + 3 < vars->colonnes)
		x++;
	if (random >= 80 && random < 90 && x - 1 > 1)
		x--;
	if (random >= 70 && random < 80 && y + 3 < vars->lines)
		y++;
	if (random >= 60 && random < 70 && y - 1 > 0)
		y--;
	ft_move_boss_ground(vars, y, x);
}

void	ft_boss_hit_player(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_attack[0], IMG * vars->mob_x, IMG * vars->mob_y);
	vars->map[vars->mob_y][vars->mob_x] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_attack[1], IMG * (vars->mob_x + 1),
		IMG * vars->mob_y);
	vars->map[vars->mob_y][vars->mob_x + 1] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_attack[2], IMG * vars->mob_x,
		IMG * (vars->mob_y + 1));
	vars->map[vars->mob_y + 1][vars->mob_x] = 'l';
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_attack[3], IMG * (vars->mob_x + 1),
		IMG * (vars->mob_y + 1));
	vars->map[vars->mob_y + 1][vars->mob_x + 1] = 'l';
	vars->hearts--;
}

int	ft_player_around(t_data *vars, int y, int x)
{
	if (vars->p_y > y - 2 && vars->p_y < y + 3 && vars->p_x < x + 3
		&& vars->p_x > x - 1)
		return (1);
	return (0);
}

void	ft_boss_movements(t_data *vars, int y, int x)
{
	int			random;
	static int	i;

	random = rand() % 100;
	vars->mob_y = y;
	vars->mob_x = x;
	if (vars->boss_spawn_status == 1)
		ft_boss_spawning_animation(vars, y, x);
	if (i++ / vars->boss_speed)
	{
		i = 0;
		if (ft_player_around(vars, y, x) && vars->boss_hp > 0)
			ft_boss_hit_player(vars, y, x);
		else if (vars->boss_hp > 0 && random > 50
			&& vars->boss_spawn_status == 0)
			ft_move_boss(vars, y, x, random);
		else if (random >= 8 && random < 60 && vars->boss_spawn_status == 0)
			ft_boss_idle(vars, y, x);
		else if (random < 8)
			ft_boss_spawn_spirit(vars, y, x, random);
	}
}

void	ft_boss_hit(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x + 1] == 'l' ||
		vars->map[vars->p_y + 1][vars->p_x] == 'l' ||
		vars->map[vars->p_y][vars->p_x - 1] == 'l' ||
		vars->map[vars->p_y - 1][vars->p_x] == 'l')
		vars->boss_hp--;
}
