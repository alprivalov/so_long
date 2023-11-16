/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_texture_chest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:46 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:47 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_open_chest(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->chest_player,
		IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_chests(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->chest_player,
		IMG * vars->p_x,
		IMG * vars->p_y);
	vars->map[vars->p_y][vars->p_x] = 'O';
	vars->n_chestopen++;
}
