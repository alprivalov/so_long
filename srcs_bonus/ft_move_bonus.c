/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:48:54 by alprival          #+#    #+#             */
/*   Updated: 2022/06/19 15:48:55 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move_chest(t_data *vars, int keycode, int y, int x)
{
	if (vars->map[y][x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[y][x] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars->map[y][x] == '3')
		ft_open_chest_slimbiome(vars, keycode);
}

void	ft_move_player_biomes(t_data *vars, int keycode, int y, int x)
{
	if (vars->map[y][x] == '5')
		ft_player_door(vars, keycode);
	else if (vars->map[y][x] == 'N')
		ft_player_dungeon(vars, keycode);
	else if (vars->map[y][x] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars->map[y][x] == 'U')
		ft_road(vars, keycode);
	else if (vars->map[y][x] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars->map[y][x] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else
		ft_move_chest(vars, keycode, y, x);
}

void	ft_move(t_data *vars, int keycode, int y, int x)
{
	if (vars->map[y][x] == '2'
		|| vars->map[y][x] == 's' || vars->map[y][x] == '9')
		vars->hearts--;
	else if (vars->map[y][x] == 'l' && vars->boss_hp > 0)
		vars->hearts--;
	else if (vars->map[y][x] == 'c'
		&& vars->n_chestopen == vars->n_chests)
		ft_cave_init(vars, keycode);
	else if (vars->map[y][x] == '0')
	{
		if (vars->map[y][x] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * x, IMG * y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[y][x] == 'E' &&
		vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
	else
		ft_move_player_biomes(vars, keycode, y, x);
}

int	ft_move_keycode(int keycode, t_data *vars)
{
	int	i;

	i = 0;
	if (vars->pause == 0)
	{
		if (keycode == 65363 || keycode == 100)
			ft_move_right(vars, keycode);
		if (keycode == 65364 || keycode == 115)
			ft_move_down(vars, keycode);
		if (keycode == 65361 || keycode == 97)
			ft_move_left(vars, keycode);
		if (keycode == 65362 || keycode == 119)
			ft_move_up(vars, keycode);
		if (keycode == 32)
			ft_player_attack(vars, keycode);
	}
	if (keycode == 65307)
		ft_close_key(keycode, vars);
}
