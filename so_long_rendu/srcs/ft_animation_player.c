/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:10:48 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 15:10:49 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_anim_player_grass(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->g_p_[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}

void	ft_anim_player_road(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->r_p_[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}

void	ft_anim_player_grass_slimbiome(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->g_p_sb[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}

void	ft_anim_player_road_slimbiome(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->r_p_sb_[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}

void	ft_mob_movements(t_data *vars, int y, int x)
{
	int random;

	random = rand() % 4;
	static int i;

	if(i++ / 200 && random == 0)
	{
		i = 0;
		if(vars->map[y][x + 1] == 'M')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->slime, IMG * (x + 1), IMG * y);
			vars->map[y][x] = 'M';
			vars->map[y][x + 1] = '2';
			mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_sb, IMG * x, IMG * y);
		}
	}
	if(i++ / 200 && random == 1)
	{
		i = 0;
		if(vars->map[y][x - 1] == 'M')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->slime, IMG * (x - 1), IMG * y);
			vars->map[y][x] = 'M';
			vars->map[y][x - 1] = '2';
			mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_sb, IMG * x, IMG * y);
		}
	}
	if(i++ / 200 && random == 2)
	{
		i = 0;
		if(vars->map[y + 1][x] == 'M')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->slime, IMG * x, IMG * (y + 1));
			vars->map[y][x] = 'M';
			vars->map[y + 1][x] = '2';
			mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_sb, IMG * x, IMG * y);
		}
	}
	if(i++ / 200 && random == 3)
	{
		i = 0;
		if(vars->map[y - 1][x] == 'M')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->slime, IMG * x, IMG * (y - 1));
			vars->map[y][x] = 'M';
			vars->map[y - 1][x] = '2';
			mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_sb, IMG * x, IMG * y);
		}
	}
}

void	ft_tu_menerve_test(t_data *vars)
{
	int x;
	int y;
	int random;

	y = 0;
	while(y < vars->lines)
	{
		x = 0;
		while(x < vars->colonnes)
		{
			x++;
			if (vars->map[y][x] == '2')
				ft_mob_movements(vars, y, x);
		}
		y++;
	}
}

int	ft_player_anim(t_data *vars)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (vars->map[vars->p_y][vars->p_x] != 'E')
	{
		if (vars->map[vars->p_y][vars->p_x] == '0')
			ft_anim_player_grass(vars);
		else if (vars->map[vars->p_y][vars->p_x] == 'Y')
			ft_anim_player_road_slimbiome(vars);
		else if (vars->map[vars->p_y][vars->p_x] == 'M')
			ft_anim_player_grass_slimbiome(vars);
		else if (vars->map[vars->p_y][vars->p_x] == 'U')
			ft_anim_player_road(vars);
	}
	if(vars->map[vars->p_y][vars->p_x] != 'E')
		ft_tu_menerve_test(vars);
	usleep(1000000 / FPS);
	return (0);
}
