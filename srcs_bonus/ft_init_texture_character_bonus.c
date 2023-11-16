/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_texture_character.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:49:29 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:49:31 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_init_character_grass(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars ->g_p_[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_one.xpm", &img_width, &img_height);
	vars ->g_p_[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_two.xpm", &img_width, &img_height);
	vars ->g_p_[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_three.xpm", &img_width, &img_height);
	vars ->g_p_[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_four.xpm", &img_width, &img_height);
	vars ->g_p_[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_five.xpm", &img_width, &img_height);
	vars ->g_p_[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_six.xpm", &img_width, &img_height);
}

void	ft_init_character_road(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars ->r_p_[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_one.xpm", &img_width, &img_height);
	vars ->r_p_[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_two.xpm", &img_width, &img_height);
	vars ->r_p_[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_three.xpm", &img_width, &img_height);
	vars ->r_p_[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_four.xpm", &img_width, &img_height);
	vars ->r_p_[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_five.xpm", &img_width, &img_height);
	vars ->r_p_[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_six.xpm", &img_width, &img_height);
}

void	ft_init_character_grass_slimbiome(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars ->g_p_sb[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_one.xpm",
			&img_width, &img_height);
	vars ->g_p_sb[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_two.xpm",
			&img_width, &img_height);
	vars ->g_p_sb[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_three.xpm",
			&img_width, &img_height);
	vars ->g_p_sb[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_four.xpm",
			&img_width, &img_height);
	vars ->g_p_sb[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_five.xpm",
			&img_width, &img_height);
	vars ->g_p_sb[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/grass_player_slimbiome_six.xpm",
			&img_width, &img_height);
}

void	ft_init_character_road_slimbiome(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars ->r_p_sb_[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_one.xpm",
			&img_width, &img_height);
	vars ->r_p_sb_[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_two.xpm",
			&img_width, &img_height);
	vars ->r_p_sb_[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_three.xpm",
			&img_width, &img_height);
	vars ->r_p_sb_[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_four.xpm",
			&img_width, &img_height);
	vars ->r_p_sb_[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_five.xpm",
			&img_width, &img_height);
	vars ->r_p_sb_[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/road_player_slimbiome_six.xpm",
			&img_width, &img_height);
}
