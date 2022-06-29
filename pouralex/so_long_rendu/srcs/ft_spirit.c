/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spirit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:17 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:38:19 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_spirit_movements(t_data *vars, int y, int x)
{
	int			random;
	static int	i;

	random = rand() % 4;
	if (i++ / vars->spirit_speed)
	{
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiii_d_wl, IMG * x, IMG * y);
		i = 0;
		vars->mob_y = y;
		vars->mob_x = x;
		vars->map[vars->mob_y][vars->mob_x] = 'N';
		ft_check_player_mob(vars, y, x, random);
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->spirit, IMG * vars->mob_x, IMG * vars->mob_y);
		vars->map[vars->mob_y][vars->mob_x] = 's';
	}
}

void	ft_spirit_hit(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x + 1] == 's')
	{
		vars->map[vars->p_y][vars->p_x + 1] = 'N';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * (vars->p_x + 1), IMG * vars->p_y);
	}
	if (vars->map[vars->p_y][vars->p_x - 1] == 's')
	{
		vars->map[vars->p_y][vars->p_x - 1] = 'N';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * (vars->p_x - 1), IMG * vars->p_y);
	}
	if (vars->map[vars->p_y + 1][vars->p_x] == 's')
	{
		vars->map[vars->p_y + 1][vars->p_x] = 'N';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * vars->p_x, IMG * (vars->p_y + 1));
	}
	if (vars->map[vars->p_y - 1][vars->p_x] == 's')
	{
		vars->map[vars->p_y - 1][vars->p_x] = 'N';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->iiiiiiiii_d_wl,
			IMG * vars->p_x, IMG * (vars->p_y - 1));
	}
}
