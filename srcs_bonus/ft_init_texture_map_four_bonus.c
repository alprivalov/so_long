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

#include "so_long_bonus.h"

void	ft_init_others_height(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> f_p[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/f_player_two.xpm", &img_width, &img_height);
	vars -> f_p[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/f_player_three.xpm", &img_width, &img_height);
	vars -> f_p[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/f_player_four.xpm", &img_width, &img_height);
	vars -> f_p[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/f_player_five.xpm", &img_width, &img_height);
	vars -> oiiiiiiii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/011111111.xpm", &img_width, &img_height);
	vars -> iioiiiiii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/110111111.xpm", &img_width, &img_height);
	vars -> iiiiiioii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/111111011.xpm", &img_width, &img_height);
	vars -> iiiiiiiio_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/111111110.xpm", &img_width, &img_height);
}

void	ft_init_others_seven(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_idle[13] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_three.xpm", &img_width, &img_height);
	vars -> boss_idle[14] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_three.xpm", &img_width, &img_height);
	vars -> boss_idle[15] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_three.xpm", &img_width, &img_height);
	vars -> dragon_g = mlx_xpm_file_to_image(vars -> mlx,
			"img/exit/dragon_grass.xpm", &img_width, &img_height);
	vars -> dragon_d = mlx_xpm_file_to_image(vars -> mlx,
			"img/exit/dragon_dungeon.xpm", &img_width, &img_height);
	vars -> f_p[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/f_player_one.xpm", &img_width, &img_height);
	ft_init_others_height(vars);
}
