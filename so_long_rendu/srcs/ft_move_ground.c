/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ground.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:13:54 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 21:13:55 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit(t_data *vars, int keycode)
{
	vars->pause = 1;
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->ending, 0, 0);
}

void	ft_player_wood(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->player_wood,
		IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_player_door(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->player_door,
		IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_player_dungeon(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->d_p_[0],
		IMG * vars->p_x, IMG * vars->p_y);
}
