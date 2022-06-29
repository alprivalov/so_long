/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_animation_parsing.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:35:09 by alprival          #+#    #+#             */
/*   Updated: 2022/06/26 03:35:10 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_map_parsing(t_data *vars)
{
	int	x;
	int	y;

	y = 0;
	while (y < vars->lines)
	{
		x = 0;
		while (x < vars->colonnes)
		{
			x++;
			if (vars->map[y][x] == '2')
				ft_slimes_structure(vars, y, x);
			if (vars->map[y][x] == '9')
				ft_skeleton_structure(vars, y, x);
			if (vars->map[y][x] == 's')
				ft_spirit_movements(vars, y, x);
			if (vars->map[y][x] == 'l')
			{
				if (vars->mv_boss == 0 && vars->boss_hp > 0)
				{
					ft_boss_movements(vars, y, x);
					vars->mv_boss = 1;
				}
				else if (vars->boss_status == 1
					&& vars->mv_boss == 0 && vars->boss_hp <= 0)
				{
					ft_boss_death(vars, y, x);
					vars->mv_boss = 1;
				}
			}
		}
		y++;
	}
	vars->mv_boss = 0;
}
