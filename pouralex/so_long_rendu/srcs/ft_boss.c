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

#include "so_long.h"

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
	}
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
		if (random > 50 && vars->map[y][x + 2] == 'N'
		&& vars->map[y + 2][x] == 'N' && vars->boss_hp > 0
		&& vars->boss_spawn_status == 0)
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
			if (random >= 90 && random <= 100 && vars->map[y][x + 2] == 'N'
				&& vars->map[y + 1][x + 2] == 'N'
				&& (y != vars->p_y && x + 2 != vars->p_x))
				x++;
			if (random >= 80 && random < 90 && vars->map[y][x - 1] == 'N'
				&& vars->map[y + 1][x - 1] == 'N'
				&& (y != vars->p_y && x != vars->p_x))
				x--;
			if (random >= 70 && random < 80 && vars->map[y + 2][x] == 'N'
				&& vars->map[y + 2][x + 1] == 'N'
				&& (y != vars->p_y && x != vars->p_x))
				y++;
			if (random >= 50 && random < 70 && vars->map[y - 1][x] == 'N'
				&& (y != vars->p_y && x != vars->p_x))
				y--;
			if (y - 1 == vars->p_y && x == vars->p_x
				|| y + 2 == vars->p_y && x == vars->p_x
				|| y == vars->p_y && x + 2 == vars->p_x
				|| y == vars->p_y && x - 1 == vars->p_x
				|| y == vars->p_y + 2 && x + 2 == vars->p_x
				|| y == vars->p_y + 2 && x + 1 == vars->p_x
				|| y == vars->p_y - 1 && x + 2 == vars->p_x
				|| y == vars->p_y + 2 && x - 1 == vars->p_x
				&& vars->boss_hp > 0)
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
			else
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
		}
		else if (random > 6 && random < 50 && vars->boss_spawn_status == 0)
			ft_boss_idle(vars, y, x);
		else if (random < 8)
			ft_boss_spawn_spirit(vars, y, x, random);
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

void	ft_boss_idle(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss],
		IMG * x, IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 1],
		IMG * (x + 1), IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 2],
		IMG * x, IMG * (y + 1));
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 3],
		IMG * (x + 1), IMG * (y + 1));
	vars->frames_boss += 4;
	if (vars->frames_boss >= 16)
		vars->frames_boss = 0;
}

void	ft_boss_hit(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x + 1] == 'l' ||
		vars->map[vars->p_y + 1][vars->p_x] == 'l' ||
		vars->map[vars->p_y][vars->p_x - 1] == 'l' ||
		vars->map[vars->p_y - 1][vars->p_x] == 'l')
		vars->boss_hp--;
}
