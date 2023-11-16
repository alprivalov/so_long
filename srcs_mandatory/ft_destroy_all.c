/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:21:19 by alprival          #+#    #+#             */
/*   Updated: 2022/08/22 20:21:20 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy_all(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->dragon_g);
	mlx_destroy_image(vars->mlx, vars->player);
	mlx_destroy_image(vars->mlx, vars->chest);
	mlx_destroy_image(vars->mlx, vars->chestopen);
	mlx_destroy_image(vars->mlx, vars->chest_player);
	mlx_destroy_image(vars->mlx, vars->ooooiioio_p);
	mlx_destroy_image(vars->mlx, vars->oooiiooio_p);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_b_p);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_t_p);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_l_p);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_r_p);
	mlx_destroy_image(vars->mlx, vars->oiooiiooo_p);
	mlx_destroy_image(vars->mlx, vars->oioiioooo_p);
	mlx_destroy_image(vars->mlx, vars->grass);
	mlx_destroy_image(vars->mlx, vars->ooooioooo);
	mlx_destroy_display(vars->mlx);
	free(vars->mlx);
}
