/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_texture_map.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:49:42 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:49:43 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_others(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->chest = mlx_xpm_file_to_image(vars->mlx,
			"img/chest/chest.xpm", &img_width, &img_height);
	vars->dragon_g = mlx_xpm_file_to_image(vars->mlx,
			"img/exit/dragon_grass.xpm", &img_width, &img_height);
	vars->chestopen = mlx_xpm_file_to_image(vars->mlx,
			"img/chest/chest_open.xpm", &img_width, &img_height);
	vars->player = mlx_xpm_file_to_image(vars->mlx,
			"img/player/player.xpm", &img_width, &img_height);
	vars->chest_player = mlx_xpm_file_to_image(vars->mlx,
			"img/player/chest_player.xpm", &img_width, &img_height);
	vars->grass = mlx_xpm_file_to_image(vars->mlx,
			"img/floors/grass.xpm", &img_width, &img_height);
}

void	ft_init_plains(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->oioiioooo_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/010110000.xpm", &img_width, &img_height);
	vars->oiooiiooo_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/010011000.xpm", &img_width, &img_height);
	vars->oooiiooio_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/000110010.xpm", &img_width, &img_height);
	vars->ooooiioio_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/000011010.xpm", &img_width, &img_height);
	vars->oiooiooio_l_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/010010010_left.xpm", &img_width, &img_height);
	vars->oiooiooio_r_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/010010010_right.xpm", &img_width, &img_height);
	vars->oooiiiooo_b_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/000111000_bottom.xpm", &img_width, &img_height);
	vars->oooiiiooo_t_p = mlx_xpm_file_to_image(vars->mlx,
			"img/plain/000111000_top.xpm", &img_width, &img_height);
}

void	ft_init_texture(t_data *vars)
{
	int		img_width;
	int		img_height;

	ft_init_others(vars);
	ft_init_plains(vars);
	vars->ooooioooo = mlx_xpm_file_to_image(vars->mlx,
			"img/walls/000010000.xpm", &img_width, &img_height);
}
