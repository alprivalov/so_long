/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_textures.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:56 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:58 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move_key(int keycode, t_data *vars)
{
	if (keycode == 65363 || keycode == 100)
		vars->p_x++;
	if (keycode == 65364 || keycode == 115)
		vars->p_y++;
	if (keycode == 65361 || keycode == 97)
		vars->p_x--;
	if (keycode == 65362 || keycode == 119)
		vars->p_y--;
	if ((keycode == 65362 || keycode == 119) || (keycode == 65361
			|| keycode == 97) || (keycode == 65364 || keycode == 115)
		|| (keycode == 65363 || keycode == 100))
		vars->move++;
}

void	ft_move_player_two(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x] == 'M')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiii_sb, IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == '3')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->chest_open_sb, IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'S')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->floors,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == '5')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->door,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'N')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * vars->p_x, IMG * vars->p_y);
}

void	ft_move_player(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'U')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->road,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'C')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'O')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->road_slimebiome, IMG * vars->p_x, IMG * vars->p_y);
	else
		ft_move_player_two(vars);
}
