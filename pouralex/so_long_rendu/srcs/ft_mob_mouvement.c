/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mob_mouvement.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:13:08 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 21:13:10 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_slime_mouvement(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx,
		vars->win, vars->slime, IMG * vars->mob_x, IMG * vars->mob_y);
	vars->map[vars->mob_y][vars->mob_x] = '2';
}

void	ft_skeleton_mouvement(t_data *vars, int y, int x)
{
	mlx_put_image_to_window(vars->mlx,
		vars->win, vars->skeleton, IMG * vars->mob_x, IMG * vars->mob_y);
	vars->map[vars->mob_y][vars->mob_x] = '9';
}
