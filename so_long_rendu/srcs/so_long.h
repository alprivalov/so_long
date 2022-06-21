/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:45 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:46 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libs/libft/libft.h"
# include "../libs/mlx/mlx.h"
# define IMG 32
# define FPS 60

typedef struct s_data {
	void	*mlx;
	void	*win;
	char	**map;
	void	*slime;
	void	*slime_road;

	void	*player;
	void	*chest_player;
	void	*road_player;
	void	*player_wood;
	void	*r_p_sb;
	void	*g_pl_sb;

	void	*exit;
	void	*enter;
	void	*door;

	void	*chest;
	void	*chestopen;
	void	*chest_open_sb;
	void	*chest_sb;
	void	*chest_p_sb;

	void	*ending;

	void	*road_slimebiome;
	void	*grass;
	void	*floors;
	void	*road;

	void	*g_p_[6];

	void	*r_p_[6];

	void	*r_p_sb_[6];

	void	*g_p_sb[6];

	void	*log;
	void	*long_r_log;
	void	*long_l_log;
	void	*book;
	void	*bed;
	void	*bench;
	void	*chair;
	void	*chest_home;
	void	*small_h_tree;
	void	*table;
	void	*grave_top;
	void	*grave_bottom;
	void	*hole;
	void	*skull;
	void	*skull_bones;

	void	*tree[4];
	void	*tree_stomp;

	void	*enter_l_sb;
	void	*enter_r_sb;
	void	*enter_l_sb_b;
	void	*enter_r_sb_bottom;
	void	*ooooiioii_sb;
	void	*oooiioiio_sb;
	void	*oooiiiiii_sb;
	void	*oiioiiooo_sb;
	void	*oiioiioii_sb;
	void	*iioiioooo_sb;
	void	*iioiioiio_sb;
	void	*iiiiiiooo_sb;
	void	*iiiiiiiii_sb;

	void	*ioootree_sb;
	void	*oiootree_sb;
	void	*ooiotree_sb;
	void	*oooitree_sb;
	void	*oooitree_s_sb;

	void	*ooooiioii_w;
	void	*oooiioiio_w;
	void	*oooiiiiii_w;
	void	*oiioiiooo_w;
	void	*oiioiioii_w;
	void	*iioiioooo_w;
	void	*iioiioiio_w;
	void	*iiiiiiooo_w;
	void	*iiiiiiiii_w;

	void	*ooooiioio_p;
	void	*oooiiooio_p;
	void	*oooiiiooo_b_p;
	void	*oooiiiooo_t_p;
	void	*oiooiooio_l_p;
	void	*oiooiooio_r_p;
	void	*oiooiiooo_p;
	void	*oioiioooo_p;

	void	*oiooiiooo_wall;
	void	*oiooiooio_wall;
	void	*oooiiooio_wall;
	void	*oooiiiooo_wall;
	void	*ooooioooo_wall;
	void	*ooooiioio_wall;
	void	*oioiioooo_wall;
	void	*ooooiooio_wall;
	void	*oooiioooo_wall;
	void	*ooooiiooo_wall;

	void	*oooiiiooo_s_wl;
	void	*oiooiooio_l_s_wl;
	void	*oiooiooio_r_s_wl;
	void	*ooooiioio_s_wl;
	void	*oooiiooio_s_wl;
	void	*oiooiiooo_s_wl;
	void	*oioiioooo_s_wl;
	void	*oiooiooio_mid_s_wl;
	void	*oiooioooo_s_wl;
	void	*ooooiooio_s_wl;
	int		p;
	int		error;
	int		c;
	int		e;
	int		move;
	int		n_chests;
	int		n_chestopen;
	int		p_x;
	int		p_y;
	int		lines;
	int		frames;
	int		colonnes;

}				t_data;

void	ft_init_vars(t_data *vars);
int		ft_parsing_map(char *av, t_data *vars);
void	ft_init_map(char *str, t_data *vars);
int		ft_check_name_file(char *str);
void	ft_init_map_texture(t_data *vars);
void	ft_grass(t_data *vars, int keycode);
void	ft_road(t_data *vars, int keycode);
void	ft_exit(t_data *vars, int keycode);
void	ft_chests(t_data *vars, int keycode);
void	ft_open_chest(t_data *vars, int keycode);
void	ft_move_up(t_data *vars, int keycode);
int		ft_move(int keycode, t_data *vars);
void	ft_move_left(t_data *vars, int keycode);
void	ft_move_right(t_data *vars, int keycode);
void	ft_move_down(t_data *vars, int keycode);
int		ft_maison(char**map, t_data *vars, int y, int x);
void	ft_move_player(t_data *vars);
void	ft_init_texture(t_data *vars);
int		ft_error_parsing(t_data *vars);
int		checks_error_argument(int ac, char * str);
void	ft_road_slimebiome(t_data *vars, int keycode);
int		ft_ext_sb(t_data *vars, int y, int x);
void	ft_grass_slimebiome(t_data *vars, int keycode);
void	ft_open_chest_slimbiome(t_data *vars, int keycode);
void	ft_player_wood(t_data *vars, int keycode);
void	ft_init_wall(t_data *vars);
void	ft_init_water(t_data *vars);
void	ft_init_stone_wall(t_data *vars);
int		ft_error(t_data *vars);
void	ft_init_plains(t_data *vars);
void	ft_init_texture(t_data *vars);
void	ft_init_decors(t_data *vars);
void	ft_init_slimbiome(t_data *vars);
int		ft_check_error_parsing(char *str, t_data *vars);
void	ft_init_tree(t_data *vars);
void	ft_init_others(t_data *vars);
void	ft_init_decors_two(t_data *vars);
void	ft_init_character_grass(t_data *vars);
void	ft_init_character_road(t_data *vars);
void	ft_init_character_grass_slimbiome(t_data *vars);
void	ft_init_character_road_slimbiome(t_data *vars);
void	ft_anim_player_grass(t_data *vars);
void	ft_anim_player_road(t_data *vars);
void	ft_anim_player_grass_slimbiome(t_data *vars);
void	ft_anim_player_road_slimbiome(t_data *vars);
void	ft_init_slime(t_data *vars);
int		ft_close(int keycode, t_data *vars);
int		ft_error(t_data *vars);
void	ft_destroy_image_one(t_data *vars);
void	ft_destroy_image_two(t_data *vars);
void	ft_destroy_image_three(t_data *vars);
void	ft_destroy_image_four(t_data *vars);
void	ft_destroy_image_five(t_data *vars);
void	ft_destroy_image_six(t_data *vars);
void	ft_destroy_all(t_data *vars);
int		ft_player_anim(t_data *vars);
int		ft_test(t_data *vars);
int		ft_close_key(int keycode, t_data *vars);
void	ft_stone_wall_init(t_data *vars, int y, int x);
void	ft_wall_init(t_data *vars, int y, int x);
void	ft_log_unit(t_data *vars, int y, int x);
void	ft_check_texture(t_data *vars, int y, int x);
int		ft_ext_sb(t_data *vars, int y, int x);
int		ft_int_sb(t_data *vars, int y, int x);
int		ft_ext_w(t_data *vars, int y, int x);
int		ft_ext_house(t_data *vars, int y, int x);
int		ft_house(t_data *vars, int y, int x);
void	ft_slimbiome_init(t_data *vars, int y, int x);
void	ft_tree_slimbiome_init(t_data *vars, int y, int x);
void	ft_water_init(t_data *vars, int y, int x);
void	ft_tree_init(t_data *vars, int y, int x);
void	ft_plains_init(t_data *vars, int y, int x);
void	ft_stone_wall_init(t_data *vars, int y, int x);
void	ft_check_texture(t_data *vars, int y, int x);
void	ft_wall_init(t_data *vars, int y, int x);
void	ft_plains_init(t_data *vars, int y, int x);
void	ft_init_map_texture(t_data *vars);
void	ft_slimbiome_init(t_data *vars, int y, int x);
void	ft_plains_init(t_data *vars, int y, int x);
void	ft_check_texture_two(t_data *vars, int y, int x);
void	ft_check_texture_three(t_data *vars, int y, int x);
void	ft_check_texture_four(t_data *vars, int y, int x);
void	ft_water_init_two(t_data *vars, int y, int x);
void	ft_wall_init_two(t_data *vars, int y, int x);
void	ft_stone_wall_init_two(t_data *vars, int y, int x);
void	ft_stone_wall_init_three(t_data *vars, int y, int x);
void	ft_slimbiome_init_two(t_data *vars, int y, int x);
void	ft_slimbiome_init_three(t_data *vars, int y, int x);
void	ft_plains_init_two(t_data *vars, int y, int x);
void	ft_init_others_two(t_data *vars);
void	ft_chest_slimbiome(t_data *vars, int keycode);
void	ft_move_player(t_data *vars);
void	ft_move_key(int keycode, t_data *vars);
void	ft_next_chest(t_data *vars, int keycode);
void	ft_check_texture_five(t_data *vars, int y, int x);
#endif
