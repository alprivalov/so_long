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

int	ft_move(int keycode, t_data *vars)
{
	int	i;

	i = 0;
	if (vars->map[vars->p_y][vars->p_x] != 'E')
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
