/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:48:39 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:48:41 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_texture(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'V')
		ft_tree_slimbiome_init(vars, y, x);
	else if (vars->map[y][x] == '2')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->slime,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == '4')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chest_sb,
			IMG * x, IMG * y);
		vars->n_chests++;
	}
	else if (vars->map[y][x] == '5')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->door,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == '8')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->hole,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == '7')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->skull,
			IMG * x, IMG * y);
	else
		ft_check_texture_two(vars, y, x);
}

void	ft_check_texture_two(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'G')
		ft_slimbiome_init(vars, y, x);
	else if (vars->map[y][x] == 'M')
		ft_slimbiome_init(vars, y, x);
	else if (vars->map[y][x] == 'Z')
		ft_water_init(vars, y, x);
	else if (vars->map[y][x] == 'U')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->road,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'J')
		ft_tree_init(vars, y, x);
	else if (vars->map[y][x] == 'B')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->bed,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'H')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->bench,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'K')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->book,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'I')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->chair,
			IMG * x, IMG * y);
	else
		ft_check_texture_three(vars, y, x);
}

void	ft_check_texture_three(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'S')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->floors,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'L')
		ft_log_unit(vars, y, x);
	else if (vars->map[y][x] == '1')
		ft_plains_init(vars, y, x);
	else if (vars->map[y][x] == 'W')
		ft_stone_wall_init(vars, y, x);
	else if (vars->map[y][x] == 'F')
		ft_wall_init(vars, y, x);
	else if (vars->map[y][x] == 'D')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->door,
			IMG * x, IMG * y);
	else
		ft_check_texture_four(vars, y, x);
}

void	ft_check_texture_four(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'C')
	{
		if (vars->map[y - 1][x] == 'M' || vars->map[y + 1][x] == 'M' ||
		vars->map[y][x + 1] == 'M' || vars->map[y][x - 1] == 'M')
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chest_sb,
				IMG * x, IMG * y);
		else
			mlx_put_image_to_window(vars->mlx, vars->win, vars->chest,
				IMG * x, IMG * y);
		vars->n_chests++;
	}
	else if (vars->map[y][x] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->exit,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->road_slimebiome,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'T')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->small_h_tree,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'A')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->table,
			IMG * x, IMG * y);
	else
		ft_check_texture_five(vars, y, x);
}

void	ft_check_texture_five(t_data *vars, int y, int x)
{
	 if (vars->map[y][x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'P')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->player,
			IMG * x, IMG * y);
		vars->p_x = x;
		vars->p_y = y;
	}
	else if (vars->map[y][x] == '6')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->skull_bones,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'X')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grave_top,
			IMG * x, IMG * y);
	else if (vars->map[y][x] == 'Q')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grave_bottom,
			IMG * x, IMG * y);
}
