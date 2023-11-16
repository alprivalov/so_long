/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boss_idle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:35:35 by alprival          #+#    #+#             */
/*   Updated: 2022/06/30 01:35:37 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_boss_idle(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss],
		IMG * x, IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 1],
		IMG * (x + 1), IMG * y);
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 2],
		IMG * x, IMG * (y + 1));
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->boss_idle[vars->frames_boss + 3],
		IMG * (x + 1), IMG * (y + 1));
	vars->frames_boss += 4;
	if (vars->frames_boss >= 16)
		vars->frames_boss = 0;
}
