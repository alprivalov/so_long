/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:36:01 by alprival          #+#    #+#             */
/*   Updated: 2022/06/26 03:36:02 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_slimes_structure(t_data *vars, int y, int x)
{
	int			random;
	static int	i;

	random = rand() % 4;
	vars->slim_status = 1;
	if (i++ / vars->slim_speed)
	{
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->iiiiiiiii_sb, IMG * x, IMG * y);
		i = 0;
		vars->mob_y = y;
		vars->mob_x = x;
		vars->map[vars->mob_y][vars->mob_x] = 'M';
		ft_check_player_mob(vars, y, x, random);
		if (vars->map[vars->mob_y][vars->mob_x] == 'M')
		{
			if (ft_check_player_next(vars, y, x))
				ft_attack_player_mob(vars, y, x);
			else
				ft_slime_mouvement(vars, y, x);
		}
	}
	vars->slim_status = 0;
}

void	ft_slime_hit(t_data *vars)
{
	if (vars->map[vars->p_y][vars->p_x + 1] == '2')
	{
		vars->map[vars->p_y][vars->p_x + 1] = 'i';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dead_slime,
			IMG * (vars->p_x + 1), IMG * vars->p_y);
	}
	else if (vars->map[vars->p_y][vars->p_x - 1] == '2')
	{
		vars->map[vars->p_y][vars->p_x - 1] = 'i';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dead_slime,
			IMG * (vars->p_x - 1), IMG * vars->p_y);
	}
	else if (vars->map[vars->p_y + 1][vars->p_x] == '2')
	{
		vars->map[vars->p_y + 1][vars->p_x] = 'i';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dead_slime,
			IMG * vars->p_x, IMG * (vars->p_y + 1));
	}
	else if (vars->map[vars->p_y - 1][vars->p_x] == '2')
	{
		vars->map[vars->p_y - 1][vars->p_x] = 'i';
		mlx_put_image_to_window(vars->mlx, vars->win, vars->dead_slime,
			IMG * vars->p_x, IMG * (vars->p_y - 1));
	}
}
