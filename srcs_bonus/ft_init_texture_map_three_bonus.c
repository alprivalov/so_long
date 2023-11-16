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

void	ft_init_others_six(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> boss_idle[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_one.xpm", &img_width, &img_height);
	vars -> boss_idle[6] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_one.xpm", &img_width, &img_height);
	vars -> boss_idle[7] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_one.xpm", &img_width, &img_height);
	vars -> boss_idle[8] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_two.xpm", &img_width, &img_height);
	vars -> boss_idle[9] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo_two.xpm", &img_width, &img_height);
	vars -> boss_idle[10] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio_two.xpm", &img_width, &img_height);
	vars -> boss_idle[11] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi_two.xpm", &img_width, &img_height);
	vars -> boss_idle[12] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_three.xpm", &img_width, &img_height);
	ft_init_others_seven(vars);
}

void	ft_init_others_five(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> d_p_[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_three.xpm", &img_width, &img_height);
	vars -> d_p_[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_four.xpm", &img_width, &img_height);
	vars -> d_p_[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_five.xpm", &img_width, &img_height);
	vars -> d_p_[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_six.xpm", &img_width, &img_height);
	vars -> blackscreen = mlx_xpm_file_to_image(vars -> mlx,
			"img/floors/black_screen.xpm", &img_width, &img_height);
	vars -> boss_idle[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo.xpm", &img_width, &img_height);
	vars -> boss_idle[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oioo.xpm", &img_width, &img_height);
	vars -> boss_idle[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/ooio.xpm", &img_width, &img_height);
	vars -> boss_idle[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/oooi.xpm", &img_width, &img_height);
	vars -> boss_idle[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/boss/iooo_one.xpm", &img_width, &img_height);
	ft_init_others_six(vars);
}

void	ft_init_others_four(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars ->iooiooooo_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/100100000.xpm", &img_width, &img_height);
	vars ->ooiooiooo_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/001001000.xpm", &img_width, &img_height);
	vars ->oooiiiiii_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/000111111.xpm", &img_width, &img_height);
	vars ->oooiooioo_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/000100100.xpm", &img_width, &img_height);
	vars ->oooooiooi_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/000001001.xpm", &img_width, &img_height);
	vars ->oiooiooio_l_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/010010010_left.xpm", &img_width, &img_height);
	vars ->oiooiooio_r_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/010010010_right.xpm", &img_width, &img_height);
	vars -> d_p_[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_one.xpm", &img_width, &img_height);
	vars -> d_p_[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/d_p_two.xpm", &img_width, &img_height);
	ft_init_others_five(vars);
}

void	ft_init_others_three(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> player_attack[1] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_r_sb.xpm", &img_width, &img_height);
	vars -> player_attack[2] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_g.xpm", &img_width, &img_height);
	vars -> player_attack[3] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_r.xpm", &img_width, &img_height);
	vars -> player_attack[4] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_s.xpm", &img_width, &img_height);
	vars -> player_attack[5] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_d.xpm", &img_width, &img_height);
	vars -> player_attack[6] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_c_sb.xpm", &img_width, &img_height);
	vars -> player_attack[7] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_c_g.xpm", &img_width, &img_height);
	vars -> player_door = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/enter.xpm", &img_width, &img_height);
	vars ->iiiiiiiii_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/111111111.xpm", &img_width, &img_height);
	vars ->iiiiiiooo_d_wl = mlx_xpm_file_to_image(vars -> mlx,
			"img/dungeon/111111000.xpm", &img_width, &img_height);
	ft_init_others_four(vars);
}

void	ft_init_others_two(t_data *vars)
{
	int		img_width;
	int		img_height;

	vars -> door = mlx_xpm_file_to_image(vars -> mlx,
			"img/door/door.xpm", &img_width, &img_height);
	vars -> floors = mlx_xpm_file_to_image(vars -> mlx,
			"img/floors/floors.xpm", &img_width, &img_height);
	vars -> road = mlx_xpm_file_to_image(vars -> mlx,
			"img/floors/road.xpm", &img_width, &img_height);
	vars -> enter_l_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/enter_left.xpm", &img_width, &img_height);
	vars -> enter_r_sb_bottom = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/enter_right_bottom.xpm", &img_width, &img_height);
	vars -> enter_l_sb_b = mlx_xpm_file_to_image(vars -> mlx,
			"img/slimbiome/enter_left_bottom.xpm", &img_width, &img_height);
	vars -> r_p_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/slimbiome_road_player.xpm", &img_width, &img_height);
	vars -> g_pl_sb = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/slimbiome_player.xpm", &img_width, &img_height);
	vars -> heart = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/hearts.xpm", &img_width, &img_height);
	vars -> player_attack[0] = mlx_xpm_file_to_image(vars -> mlx,
			"img/player/player_attack_sb.xpm", &img_width, &img_height);
	ft_init_others_three(vars);
}
