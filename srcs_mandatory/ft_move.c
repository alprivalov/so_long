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

#include "so_long.h"

void	ft_move(t_data *vars, int keycode, int y, int x)
{
	if (vars->map[y][x] == '0')
	{
		if (vars->map[y][x] == 'C')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chestopen,
				IMG * x, IMG * y);
		ft_grass(vars, keycode);
	}
	else if (vars->map[y][x] == 'E' &&
		vars->n_chests == vars->n_chestopen)
		ft_exit(vars, keycode);
	else if (vars->map[y][x] == 'O')
		ft_open_chest(vars, keycode);
	else if (vars->map[y][x] == 'C')
		ft_chests(vars, keycode);
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
	}
	if (keycode == 65307)
		ft_close_key(keycode, vars);
}
