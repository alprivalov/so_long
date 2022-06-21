/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_texture_mobs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:20 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:21 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_slime(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars->slime = mlx_xpm_file_to_image(vars->mlx,
			"../img/slime/slime.xpm", &img_width, &img_height);
	vars->slime_road = mlx_xpm_file_to_image(vars->mlx,
			"../img/slime/slime_road.xpm", &img_width, &img_height);
}
