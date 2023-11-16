/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dungeon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:08 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 18:38:11 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_wipe(t_data *vars, int keycode)
{
	int	i;

	i = vars->lines - 1;
	while (i >= 0)
	{
		free(vars->map[i]);
		i--;
	}
	free(vars->map);
}

void	ft_init_base_map(char *str, t_data *vars)
{
	ft_init_black_screen(vars);
	ft_init_map(str, vars);
	ft_init_map_texture(vars);
	ft_hud(vars);
}

void	ft_init_black_screen(t_data *vars)
{
	int	x;
	int	y;

	y = 0;
	while (y < 31)
	{
		x = 0;
		while (x < 60)
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->blackscreen,
				IMG * x, IMG * y);
			x++;
		}
		y++;
	}
}

void	ft_cave_init(t_data *vars, int keycode)
{
	ft_wipe(vars, keycode);
	ft_init_vars(vars);
	vars->dungeon = 1;
	vars->boss_hp = 10;
	vars->boss_status = 1;
	ft_parsing_map("maps/big/dungeon.ber", vars);
	ft_init_base_map("maps/big/dungeon.ber", vars);
	vars->map[vars->p_y][vars->p_x] = 'N';
}
