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
	if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'E'
		&& vars -> n_chestopen == vars -> n_chests)
		ft_exit(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == '0')
	{
		if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'C')
			mlx_put_image_to_window(vars -> mlx, vars -> win, vars -> chestopen,
				IMG * vars -> p_x, IMG * vars -> p_y);
		ft_grass(vars, keycode);
	}
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'U')
		ft_road(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars -> map[vars -> p_y - 1][vars -> p_x] == '3')
		ft_open_chest_slimbiome(vars, keycode);
}

void	ft_move_left(t_data *vars, int keycode)
{
	if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'E' &&
		vars -> n_chestopen == vars -> n_chests)
		ft_exit(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == '0')
	{
		if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'C')
			mlx_put_image_to_window(vars -> mlx, vars -> win, vars -> chestopen,
				IMG * vars -> p_x, IMG * vars -> p_y);
		ft_grass(vars, keycode);
	}
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'U')
		ft_road(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x - 1] == '3')
		ft_open_chest_slimbiome(vars, keycode);
}

void	ft_move_right(t_data *vars, int keycode)
{
	if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'E' &&
		vars -> n_chestopen == vars -> n_chests)
		ft_exit(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == '0')
	{
		if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'C')
			mlx_put_image_to_window(vars -> mlx, vars -> win, vars -> chestopen,
				IMG * vars -> p_x, IMG * vars -> p_y);
		ft_grass(vars, keycode);
	}
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'U')
		ft_road(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars -> map[vars -> p_y][vars -> p_x + 1] == '3')
		ft_open_chest_slimbiome(vars, keycode);
}

void	ft_move_down(t_data *vars, int keycode)
{
	if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'C')
		ft_next_chest(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'E' &&
		vars -> n_chestopen == vars -> n_chests)
		ft_exit(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == '0')
	{
		if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'C')
			mlx_put_image_to_window(vars -> mlx, vars -> win, vars -> chestopen,
				IMG * vars -> p_x, IMG * vars -> p_y);
		ft_grass(vars, keycode);
	}
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'U')
		ft_road(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'Y')
		ft_road_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'M')
		ft_grass_slimebiome(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'S')
		ft_player_wood(vars, keycode);
	else if (vars -> map[vars -> p_y + 1][vars -> p_x] == '3')
		ft_open_chest_slimbiome(vars, keycode);
}
