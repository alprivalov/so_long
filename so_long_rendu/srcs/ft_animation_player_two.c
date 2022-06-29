/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:10:48 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 15:10:49 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_anim_player_grass(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->g_p_[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}

void	ft_anim_player_road(t_data *vars)
{
	static int	i;

	if (i++ / 20)
	{
		i = 0;
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->r_p_[vars->frames],
			IMG * vars->p_x, IMG * vars->p_y);
		vars->frames++;
		if (vars->frames >= 5)
			vars->frames = 0;
	}
}
