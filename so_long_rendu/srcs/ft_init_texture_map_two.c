/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_texture_map_two.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:49:54 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:49:55 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_decors_two(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> grass = mlx_xpm_file_to_image(vars -> mlx,
			"../img/floors/grass.xpm", &img_width, &img_height);
	vars -> chest_p_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/chest_player_slimbiome.xpm",
			&img_width, &img_height);
	vars -> exit = mlx_xpm_file_to_image(vars -> mlx,
			"../img/exit/exit.xpm", &img_width, &img_height);
	vars -> chest = mlx_xpm_file_to_image(vars -> mlx,
			"../img/chest/chest.xpm", &img_width, &img_height);
	vars -> chestopen = mlx_xpm_file_to_image(vars -> mlx,
			"../img/chest/chestopen.xpm", &img_width, &img_height);
	vars -> enter = mlx_xpm_file_to_image(vars -> mlx,
			"../img/door/door.xpm", &img_width, &img_height);
	vars -> ending = mlx_xpm_file_to_image(vars -> mlx,
			"../img/ending/ending.xpm", &img_width, &img_height);
	vars -> chest_player = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/chest_player.xpm", &img_width, &img_height);
	vars -> chestopen = mlx_xpm_file_to_image(vars -> mlx,
			"../img/chest/chest_open.xpm", &img_width, &img_height);
}

void	ft_init_decors(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> road_player = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/road_player.xpm", &img_width, &img_height);
	vars -> road_slimebiome = mlx_xpm_file_to_image(vars -> mlx,
			"../img/floors/slimbiome_road.xpm", &img_width, &img_height);
	vars -> grave_top = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/grave_top.xpm", &img_width, &img_height);
	vars -> grave_bottom = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/grave_bottom.xpm", &img_width, &img_height);
	vars -> hole = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/hole.xpm", &img_width, &img_height);
	vars -> skull = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/skull.xpm", &img_width, &img_height);
	vars -> skull_bones = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/skull_bones.xpm", &img_width, &img_height);
	vars -> chest_open_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/chest/chest_open_slimbiome.xpm", &img_width, &img_height);
	vars -> chest_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/chest/chest_slimbiome.xpm", &img_width, &img_height);
	vars -> player_wood = mlx_xpm_file_to_image(vars -> mlx,
			"../img/player/player_wood.xpm", &img_width, &img_height);
}

void	ft_init_slimbiome(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> ooooiioii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/000011011.xpm", &img_width, &img_height);
	vars -> oooiioiio_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/000110110.xpm", &img_width, &img_height);
	vars -> oooiiiiii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/000111111.xpm", &img_width, &img_height);
	vars -> oiioiiooo_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/011011000.xpm", &img_width, &img_height);
	vars -> oiioiioii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/011011011.xpm", &img_width, &img_height);
	vars -> iioiioooo_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/110110000.xpm", &img_width, &img_height);
	vars -> iioiioiio_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/110110110.xpm", &img_width, &img_height);
	vars -> iiiiiiooo_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/111111000.xpm", &img_width, &img_height);
	vars -> iiiiiiiii_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/111111111.xpm", &img_width, &img_height);
	vars -> enter_r_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/slimbiome/enter_right.xpm", &img_width, &img_height);
}

void	ft_init_tree(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> tree[0] = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/1000_tree.xpm", &img_width, &img_height);
	vars -> tree[1] = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0100_tree.xpm", &img_width, &img_height);
	vars -> tree[2] = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0010_tree.xpm", &img_width, &img_height);
	vars -> tree[3] = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0001_tree.xpm", &img_width, &img_height);
	vars -> tree_stomp = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/tree_stomp.xpm", &img_width, &img_height);
	vars -> ioootree_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/1000_tree_slimbiome.xpm", &img_width, &img_height);
	vars -> oiootree_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0100_tree_slimbiome.xpm", &img_width, &img_height);
	vars -> ooiotree_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0010_tree_slimbiome.xpm", &img_width, &img_height);
	vars -> oooitree_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/0001_tree_slimbiome.xpm", &img_width, &img_height);
	vars -> oooitree_s_sb = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/tree_stomp_slimbiome.xpm", &img_width, &img_height);
}

void	ft_init_others(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> log = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/log.xpm", &img_width, &img_height);
	vars -> long_l_log = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/long_log_left.xpm", &img_width, &img_height);
	vars -> long_r_log = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/long_log_right.xpm", &img_width, &img_height);
	vars -> bed = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/bed.xpm", &img_width, &img_height);
	vars -> bench = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/bench.xpm", &img_width, &img_height);
	vars -> book = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/book.xpm", &img_width, &img_height);
	vars -> chair = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/chair.xpm", &img_width, &img_height);
	vars -> chest_home = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/chest.xpm", &img_width, &img_height);
	vars -> small_h_tree = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/small_tree.xpm", &img_width, &img_height);
	vars -> table = mlx_xpm_file_to_image(vars -> mlx,
			"../img/decors/table.xpm", &img_width, &img_height);
}
