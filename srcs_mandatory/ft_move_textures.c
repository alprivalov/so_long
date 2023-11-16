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

#include "so_long.h"

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
	{
		vars->move++;
		write(1, "Move number", 12);
		ft_putnbr_fd(vars->move, 1);
		write(1, "\n", 1);
	}
}

void	ft_move_player(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'C')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
			IMG * vars->p_x, IMG * vars->p_y);
	else if (vars->map[vars->p_y][vars->p_x] == 'O')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
			IMG * vars->p_x, IMG * vars->p_y);
}
