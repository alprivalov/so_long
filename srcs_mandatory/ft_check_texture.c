/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:48:39 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:48:41 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_texture(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'C')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chest,
			IMG * x, IMG * y);
		vars->n_chests++;
	}
	else
		ft_check_texture_two(vars, y, x);
}

void	ft_check_texture_two(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == '1')
		ft_plains_init(vars, y, x);
	else if (vars->map[y][x] == 'P')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player,
			IMG * x, IMG * y);
		vars->p_x = x;
		vars->p_y = y;
	}
	else if (vars->map[y][x] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dragon_g,
			IMG * x, IMG * y);
}
