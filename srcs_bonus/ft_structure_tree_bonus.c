/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_tree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:09 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:11 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_log_unit(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'L')
	{
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->long_l_log, IMG * x, IMG * y);
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->long_r_log, IMG * (x + 1), IMG * y);
	}
	if (vars->map[y][x - 1] != 'L' && vars->map[y][x + 1] != 'L')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->log, IMG * x, IMG * y);
}

void	ft_tree_slimbiome_init(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'V' && vars->map[y + 1][x] == 'V')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ioootree_sb, IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'V' && vars->map[y][x - 1] == 'V')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oiootree_sb, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'V' && vars->map[y][x + 1] == 'V')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->ooiotree_sb, IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'V' && vars->map[y][x - 1] == 'V')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooitree_sb, IMG * x, IMG * y);
	else
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->oooitree_s_sb, IMG * x, IMG * y);
}

void	ft_tree_init(t_data *vars, int y, int x)
{
	if (vars->map[y][x + 1] == 'J' && vars->map[y + 1][x] == 'J')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->tree[0], IMG * x, IMG * y);
	else if (vars->map[y + 1][x] == 'J' && vars->map[y][x - 1] == 'J')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->tree[1], IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'J' && vars->map[y][x + 1] == 'J')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->tree[2], IMG * x, IMG * y);
	else if (vars->map[y - 1][x] == 'J' && vars->map[y][x - 1] == 'J')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->tree[3], IMG * x, IMG * y);
	else
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->tree_stomp, IMG * x, IMG * y);
}
