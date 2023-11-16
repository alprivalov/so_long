/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_attack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:16:57 by alprival          #+#    #+#             */
/*   Updated: 2022/06/30 00:16:58 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_player_attack_ground(t_data *vars, int keycode)
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
	if (vars->map[vars->p_y][vars->p_x] == 'U')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[3],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'S')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[4],
			IMG * vars->p_x, IMG * vars->p_y);
	if (vars->map[vars->p_y][vars->p_x] == 'N')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player_attack[5],
			IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_player_attack(t_data *vars, int keycode)
{
	ft_player_attack_ground(vars, keycode);
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
	ft_boss_hit(vars);
	ft_skeleton_hit(vars);
	ft_slime_hit(vars);
	ft_spirit_hit(vars);
}
