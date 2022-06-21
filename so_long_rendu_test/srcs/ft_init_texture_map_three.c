/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_texture_map_three.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:04 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:05 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_others_two(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> door = mlx_xpm_file_to_image(vars -> mlx,
			"../img/door/door.xpm", &img_width, &img_height);
	vars -> floors = mlx_xpm_file_to_image(vars -> mlx,
			"../img/floors/floors.xpm", &img_width, &img_height);
	vars -> road = mlx_xpm_file_to_image(vars -> mlx,
			"../img/floors/road.xpm", &img_width, &img_height);
	vars -> enter_l_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/enter_left.xpm", &img_width, &img_height);
	vars -> enter_r_sb_bottom = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/enter_right_bottom.xpm", &img_width, &img_height);
	vars -> enter_l_sb_b = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/enter_left_bottom.xpm", &img_width, &img_height);
	vars -> r_p_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/slimbiome_road_player.xpm", &img_width, &img_height);
	vars -> g_pl_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/slimbiome_player.xpm", &img_width, &img_height);
}
