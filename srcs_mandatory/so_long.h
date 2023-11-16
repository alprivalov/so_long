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
# include <unistd.h>
# define IMG 32
# define FPS 60

typedef struct s_data {
	void	*mlx;
	void	*win;
	char	**map;
	void	*dragon_g;
	void	*player;
	void	*chest;
	void	*chestopen;
	void	*chest_player;
	void	*ooooiioio_p;
	void	*oooiiooio_p;
	void	*oooiiiooo_b_p;
	void	*oooiiiooo_t_p;
	void	*oiooiooio_l_p;
	void	*oiooiooio_r_p;
	void	*oiooiiooo_p;
	void	*oioiioooo_p;
	void	*ooooioooo;
	void	*grass;

	int		p;
	int		c;
	int		e;
	int		move;
	int		n_chests;
	int		n_chestopen;
	int		p_x;
	int		p_y;
	int		error;
	int		lines;
	int		colonnes;
	int		pause;

}				t_data;

//				player				//

void	ft_move_player(t_data *vars);

//				chest				//

void	ft_open_chest(t_data *vars, int keycode);
void	ft_chests(t_data *vars, int keycode);

//				scenary				//

void	ft_grass(t_data *vars, int keycode);
void	ft_exit(t_data *vars, int keycode);

//				scenary.algo		//

void	ft_init_map_texture(t_data *vars);
void	ft_init_map(char *str, t_data *vars);
void	ft_init_vars(t_data *vars);
void	ft_plains_init_two(t_data *vars, int y, int x);
void	ft_plains_init(t_data *vars, int y, int x);
void	ft_init_texture(t_data *vars);
void	ft_init_plains(t_data *vars);

//				move				//

void	ft_move_down(t_data *vars, int keycode);
void	ft_move_up(t_data *vars, int keycode);
void	ft_move(t_data *vars, int keycode, int y, int x);
int		ft_move_keycode(int keycode, t_data *vars);
void	ft_move_key(int keycode, t_data *vars);
void	ft_move_left(t_data *vars, int keycode);
void	ft_move_right(t_data *vars, int keycode);

//				check				//

int		ft_check_name_file(char *str);
void	ft_check_error_parsing(char *str, t_data *vars);
void	ft_check_texture(t_data *vars, int y, int x);
void	ft_check_texture_two(t_data *vars, int y, int x);
int		checks_error_argument(int ac, char *str);
void	ft_small_check(t_data *vars);

//				destroy				//

void	ft_destroy_all(t_data *vars);

//				others				//

int		ft_close_mouse(t_data *vars);
int		ft_close_key(int keycode, t_data *vars);
int		ft_error(t_data *vars);
void	ft_increase_p_c_e(t_data *vars, int y, int x);
int		ft_error_diff_object(t_data *vars, int y, int x);
void	ft_parsing_map(char *av, t_data *vars);

#endif
