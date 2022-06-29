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

void	ft_init_wall(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->ooooiioio_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000011010.xpm", &img_width, &img_height);
	vars->oioiioooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/010110000.xpm", &img_width, &img_height);
	vars->oiooiiooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/010011000.xpm", &img_width, &img_height);
	vars->oiooiooio_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/010010010.xpm", &img_width, &img_height);
	vars->oooiiooio_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000110010.xpm", &img_width, &img_height);
	vars->oooiiiooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000111000.xpm", &img_width, &img_height);
	vars->ooooioooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000010000.xpm", &img_width, &img_height);
	vars->ooooiooio_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000010010.xpm", &img_width, &img_height);
	vars->oooiioooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000110000.xpm", &img_width, &img_height);
	vars->ooooiiooo_wall = mlx_xpm_file_to_image(vars->mlx,
			"../img/walls/000011000.xpm", &img_width, &img_height);
}

void	ft_init_water(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->ooooiioii_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/000011011.xpm", &img_width, &img_height);
	vars->oooiioiio_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/000110110.xpm", &img_width, &img_height);
	vars->oooiiiiii_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/000111111.xpm", &img_width, &img_height);
	vars->oiioiiooo_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/011011000.xpm", &img_width, &img_height);
	vars->oiioiioii_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/011011011.xpm", &img_width, &img_height);
	vars->iioiioooo_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/110110000.xpm", &img_width, &img_height);
	vars->iioiioiio_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/110110110.xpm", &img_width, &img_height);
	vars->iiiiiiooo_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/111111000.xpm", &img_width, &img_height);
	vars->iiiiiiiii_w = mlx_xpm_file_to_image(vars->mlx,
			"../img/water/111111111.xpm", &img_width, &img_height);
}

void	ft_init_stone_wall(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->oioiioooo_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010110000.xpm", &img_width, &img_height);
	vars->oiooiiooo_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010011000.xpm", &img_width, &img_height);
	vars->oooiiiooo_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/000111000.xpm", &img_width, &img_height);
	vars->oooiiooio_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/000110010.xpm", &img_width, &img_height);
	vars->ooooiioio_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/000011010.xpm", &img_width, &img_height);
	vars->oiooioooo_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010010000.xpm", &img_width, &img_height);
	vars->ooooiooio_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/000010010.xpm", &img_width, &img_height);
	vars->oiooiooio_l_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010010010_left.xpm", &img_width, &img_height);
	vars->oiooiooio_r_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010010010_right.xpm", &img_width, &img_height);
	vars->oiooiooio_mid_s_wl = mlx_xpm_file_to_image(vars->mlx,
			"../img/stone_walls/010010010_mid.xpm", &img_width, &img_height);
}

void	ft_init_plains(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->oioiioooo_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/010110000.xpm", &img_width, &img_height);
	vars->oiooiiooo_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/010011000.xpm", &img_width, &img_height);
	vars->oooiiooio_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/000110010.xpm", &img_width, &img_height);
	vars->ooooiioio_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/000011010.xpm", &img_width, &img_height);
	vars->oiooiooio_l_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/010010010_left.xpm", &img_width, &img_height);
	vars->oiooiooio_r_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/010010010_right.xpm", &img_width, &img_height);
	vars->oooiiiooo_b_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/000111000_bottom.xpm", &img_width, &img_height);
	vars->oooiiiooo_t_p = mlx_xpm_file_to_image(vars->mlx,
			"../img/plain/000111000_top.xpm", &img_width, &img_height);
}

void	ft_init_texture(t_data *vars)
{
	int		img_width;
	int		img_height;

	ft_init_wall(vars);
	ft_init_water(vars);
	ft_init_stone_wall(vars);
	ft_init_plains(vars);
	ft_init_slimbiome(vars);
	ft_init_tree(vars);
	ft_init_others(vars);
	ft_init_decors(vars);
	ft_init_decors_two(vars);
	ft_init_character_grass(vars);
	ft_init_character_road(vars);
	ft_init_character_grass_slimbiome(vars);
	ft_init_character_road_slimbiome(vars);
	ft_init_slime(vars);
	ft_init_others_two(vars);
	ft_init_boss(vars);
	ft_init_boss_death_one(vars);
	vars->player = mlx_xpm_file_to_image(vars->mlx,
			"../img/player/player.xpm", &img_width, &img_height);
}
