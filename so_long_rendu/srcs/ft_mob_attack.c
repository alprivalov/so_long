/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mob_attack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:13:33 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 21:13:37 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_player_next(t_data *vars, int y, int x)
{
	if (vars->mob_y - 1 == vars->p_y && vars->mob_x == vars->p_x
		|| vars->mob_y + 1 == vars->p_y && vars->mob_x == vars->p_x
		|| vars->mob_y == vars->p_y && vars->mob_x + 1 == vars->p_x
		|| vars->mob_y == vars->p_y && vars->mob_x - 1 == vars->p_x)
		return (1);
	return (0);
}

void	ft_attack_player_mob(t_data *vars, int y, int x)
{
	if (vars->slim_status == 1)
	{
		if (ft_check_player_next(vars, y, x))
		{
			mlx_put_image_to_window(vars->mlx, vars->win,
				vars->slime_attack, IMG * vars->mob_x, IMG * vars->mob_y);
			vars->map[vars->mob_y][vars->mob_x] = '2';
			vars->hearts--;
		}
	}
	if (vars->skeleton_status == 1)
	{
		if (ft_check_player_next(vars, y, x))
		{
			mlx_put_image_to_window(vars->mlx, vars->win,
				vars->skeleton_attack, IMG * vars->mob_x, IMG * vars->mob_y);
			vars->map[vars->mob_y][vars->mob_x] = '9';
			vars->hearts--;
		}
	}
}
