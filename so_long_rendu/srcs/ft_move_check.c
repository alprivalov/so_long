/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:29 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:30 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(t_data *vars, int keycode)
{
	if (vars->map[vars->p_y - 1][vars->p_x] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == '2')
		vars->hearts--;
	else if (vars->map[vars->p_y - 1][vars->p_x] == 's')
		vars->hearts--;
	else if (vars->map[vars->p_y - 1][vars->p_x] == '9')
		vars->hearts--;
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'l' && vars->boss_hp > 0)
		vars->hearts--;
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'c'
		&& vars->n_chestopen == vars->n_chests)
		ft_dinguerie(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == '0')
	{
		if (vars->map[vars->p_y - 1][vars->p_x] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * vars->p_x, IMG * vars->p_y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'U')
		ft_road(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == '3')
		ft_open_chest_slimbiome(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == '5')
		ft_player_door(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'N')
		ft_player_dungeon(vars, keycode);
	else if (vars->map[vars->p_y - 1][vars->p_x] == 'E' &&
		vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
}

void	ft_move_left(t_data *vars, int keycode)
{
	if (vars->map[vars->p_y][vars->p_x - 1] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == '2')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x - 1] == 's')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x - 1] == '9')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'l' && vars->boss_hp > 0)
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'c' &&
		vars->n_chestopen == vars->n_chests)
		ft_dinguerie(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == '0')
	{
		if (vars->map[vars->p_y][vars->p_x - 1] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * vars->p_x, IMG * vars->p_y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'U')
		ft_road(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == '3')
		ft_open_chest_slimbiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == '5')
		ft_player_door(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'N')
		ft_player_dungeon(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x - 1] == 'E' &&
	vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
}

void	ft_move_right(t_data *vars, int keycode)
{
	if (vars->map[vars->p_y][vars->p_x + 1] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == '2')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x + 1] == 's')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x + 1] == '9')
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'l' && vars->boss_hp > 0)
		vars->hearts--;
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'c' &&
		vars->n_chestopen == vars->n_chests)
		ft_dinguerie(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == '0')
	{
		if (vars->map[vars->p_y][vars->p_x + 1] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * vars->p_x, IMG * vars->p_y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'U')
		ft_road(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == '3')
		ft_open_chest_slimbiome(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == '5')
		ft_player_door(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'N')
		ft_player_dungeon(vars, keycode);
	else if (vars->map[vars->p_y][vars->p_x + 1] == 'E' &&
		vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
}

void	ft_move_down(t_data *vars, int keycode)
{
	if (vars->map[vars->p_y + 1][vars->p_x] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == '2')
		vars->hearts--;
	else if (vars->map[vars->p_y + 1][vars->p_x] == 's')
		vars->hearts--;
	else if (vars->map[vars->p_y + 1][vars->p_x] == '9')
		vars->hearts--;
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'l' && vars->boss_hp > 0)
		vars->hearts--;
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'c' &&
		vars->n_chestopen == vars->n_chests)
		ft_dinguerie(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == '0')
	{
		if (vars->map[vars->p_y + 1][vars->p_x] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * vars->p_x, IMG * vars->p_y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'U')
		ft_road(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == '3')
		ft_open_chest_slimbiome(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == '5')
		ft_player_door(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'N')
		ft_player_dungeon(vars, keycode);
	else if (vars->map[vars->p_y + 1][vars->p_x] == 'E' &&
		vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
}

void	ft_player_attack(t_data *vars, int keycode)
{
	if (vars->map[vars->p_y][vars->p_x] == 'M')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[0],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[1],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[2],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == '3' &&
	(vars->map[vars->p_y][vars->p_x + 1] == 'M' ||
	vars->map[vars->p_y][vars->p_x - 1] == 'M' ||
	vars->map[vars->p_y + 1][vars->p_x] == 'M' ||
	vars->map[vars->p_y + 1][vars->p_x] == 'M'))
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[6],
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'O')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[7],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'U')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[3],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'S')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[4],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'N')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[5],
			IMG * vars->p_x, IMG * vars->p_y);
	ft_boss_hit(vars);
	ft_skeleton_hit(vars);
	ft_slime_hit(vars);
	ft_spirit_hit(vars);
}
