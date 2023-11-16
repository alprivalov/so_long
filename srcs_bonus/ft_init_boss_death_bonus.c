/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_boss_death.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:28 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:38:32 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_init_boss_death_three(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_death[13] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_four.xpm", &img_width, &img_height);
	vars -> boss_death[17] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_five.xpm", &img_width, &img_height);
	vars -> boss_death[21] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_six.xpm", &img_width, &img_height);
	vars -> boss_death[15] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_four.xpm", &img_width, &img_height);
	vars -> boss_death[19] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_five.xpm", &img_width, &img_height);
	vars -> boss_death[23] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_six.xpm", &img_width, &img_height);
}

void	ft_init_boss_death_two(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_death[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_one.xpm", &img_width, &img_height);
	vars -> boss_death[6] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_two.xpm", &img_width, &img_height);
	vars -> boss_death[10] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_three.xpm", &img_width, &img_height);
	vars -> boss_death[14] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_four.xpm", &img_width, &img_height);
	vars -> boss_death[18] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_five.xpm", &img_width, &img_height);
	vars -> boss_death[22] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_d_six.xpm", &img_width, &img_height);
	vars -> boss_death[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_one.xpm", &img_width, &img_height);
	vars -> boss_death[7] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_two.xpm", &img_width, &img_height);
	vars -> boss_death[11] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_d_three.xpm", &img_width, &img_height);
	ft_init_boss_death_three(vars);
}

void	ft_init_boss_death_one(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_death[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_one.xpm", &img_width, &img_height);
	vars -> boss_death[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_two.xpm", &img_width, &img_height);
	vars -> boss_death[8] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_three.xpm", &img_width, &img_height);
	vars -> boss_death[12] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_four.xpm", &img_width, &img_height);
	vars -> boss_death[16] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_five.xpm", &img_width, &img_height);
	vars -> boss_death[20] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_d_six.xpm", &img_width, &img_height);
	vars -> boss_death[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_one.xpm", &img_width, &img_height);
	vars -> boss_death[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_two.xpm", &img_width, &img_height);
	vars -> boss_death[9] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_d_three.xpm", &img_width, &img_height);
	ft_init_boss_death_two(vars);
}
