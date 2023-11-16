/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_boss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:37:57 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:37:59 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_init_boss(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo.xpm", &img_width, &img_height);
	vars -> boss[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo.xpm", &img_width, &img_height);
	vars -> boss[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio.xpm", &img_width, &img_height);
	vars -> boss[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi.xpm", &img_width, &img_height);
	vars -> boss_attack[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_attack.xpm", &img_width, &img_height);
	vars -> boss_attack[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_attack.xpm", &img_width, &img_height);
	vars -> boss_attack[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_attack.xpm", &img_width, &img_height);
	vars -> boss_attack[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_attack.xpm", &img_width, &img_height);
	ft_init_boss_spawn_one(vars);
}
