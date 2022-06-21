/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_image_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:49:15 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:49:18 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy_image_six(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->ooooiioio_s_wl);
	mlx_destroy_image(vars->mlx, vars->oooiiooio_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiiooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->oioiioooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_mid_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooioooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->ooooiooio_s_wl);
	mlx_destroy_display(vars->mlx);
	free(vars->mlx);
}

void	ft_destroy_all(t_data *vars)
{
	ft_destroy_image_one(vars);
	ft_destroy_image_two(vars);
	ft_destroy_image_three(vars);
	ft_destroy_image_four(vars);
	ft_destroy_image_five(vars);
	ft_destroy_image_six(vars);
}
