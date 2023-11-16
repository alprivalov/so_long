/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boss_spawn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:51 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:38:54 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_init_boss_spawn_two(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_spawn[8] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_spawn_three.xpm", &img_width, &img_height);
	vars -> boss_spawn[9] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_spawn_three.xpm", &img_width, &img_height);
	vars -> boss_spawn[10] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_spawn_three.xpm", &img_width, &img_height);
	vars -> boss_spawn[11] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_spawn_three.xpm", &img_width, &img_height);
	vars -> boss_spawn[12] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_spawn_four.xpm", &img_width, &img_height);
	vars -> boss_spawn[13] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_spawn_four.xpm", &img_width, &img_height);
	vars -> boss_spawn[14] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_spawn_four.xpm", &img_width, &img_height);
	vars -> boss_spawn[15] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_spawn_four.xpm", &img_width, &img_height);
}

void	ft_init_boss_spawn_one(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_spawn[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_spawn_one.xpm", &img_width, &img_height);
	vars -> boss_spawn[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_spawn_one.xpm", &img_width, &img_height);
	vars -> boss_spawn[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_spawn_one.xpm", &img_width, &img_height);
	vars -> boss_spawn[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_spawn_one.xpm", &img_width, &img_height);
	vars -> boss_spawn[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_spawn_two.xpm", &img_width, &img_height);
	vars -> boss_spawn[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_spawn_two.xpm", &img_width, &img_height);
	vars -> boss_spawn[6] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_spawn_two.xpm", &img_width, &img_height);
	vars -> boss_spawn[7] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_spawn_two.xpm", &img_width, &img_height);
	ft_init_boss_spawn_two(vars);
}
