/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_road_grass_slimebiome.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:38 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:39 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_grass(t_data *vars, int keycode)
{	
	ft_move_player(vars);
	ft_move_key(keycode, vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->player,
		IMG * vars->p_x, IMG * vars->p_y);
}
