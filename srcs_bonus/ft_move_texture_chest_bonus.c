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

#include "so_long_bonus.h"

void	ft_chest_slimbiome(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->chest_p_sb,
		IMG * vars->p_x, IMG * vars->p_y);
	vars->map[vars->p_y][vars->p_x] = '3';
	vars->n_chestopen++;
}

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

void	ft_open_chest_slimbiome(t_data *vars, int keycode)
{
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->chest_p_sb,
		IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_next_chest(t_data *vars, int keycode)
{
	if (vars -> map[vars -> p_y + 1][vars -> p_x] == 'M' ||
	vars -> map[vars -> p_y - 1][vars -> p_x] == 'M' ||
	vars -> map[vars -> p_y][vars -> p_x + 1] == 'M' ||
	vars -> map[vars -> p_y][vars -> p_x + 1] == 'M')
		ft_chest_slimbiome(vars, keycode);
	else
		ft_chests(vars, keycode);
}
