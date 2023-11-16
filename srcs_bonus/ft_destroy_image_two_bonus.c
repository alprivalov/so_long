/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_image_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:49:15 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:49:18 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_destroy_image_six(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->ooooiioio_s_wl);
	mlx_destroy_image(vars->mlx, vars->oooiiooio_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiiooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->oioiioooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_mid_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooioooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->ooooiooio_s_wl);
	mlx_destroy_image(vars->mlx, vars->skeleton);
	mlx_destroy_image(vars->mlx, vars->dead_skeleton);
	mlx_destroy_image(vars->mlx, vars->dead_slime);
	mlx_destroy_image(vars->mlx, vars->heart);
	mlx_destroy_image(vars->mlx, vars->skeleton_attack);
	mlx_destroy_image(vars->mlx, vars->slime_attack);
	mlx_destroy_image(vars->mlx, vars->player_door);
	mlx_destroy_image(vars->mlx, vars->blackscreen);
	mlx_destroy_image(vars->mlx, vars->log);
	mlx_destroy_image(vars->mlx, vars->dragon_d);
	mlx_destroy_image(vars->mlx, vars->dragon_g);
}

void	ft_destroy_image_seven(t_data *vars)
{
	int	i;

	i = -1;
	while (++i < 4)
		mlx_destroy_image(vars->mlx, vars->boss[i]);
	i = -1;
	while (++i < 24)
		mlx_destroy_image(vars->mlx, vars->boss_death[i]);
	i = -1;
	while (++i < 16)
		mlx_destroy_image(vars->mlx, vars->boss_idle[i]);
	i = -1;
	while (++i < 4)
		mlx_destroy_image(vars->mlx, vars->boss_attack[i]);
	i = -1;
	while (++i < 8)
		mlx_destroy_image(vars->mlx, vars->player_attack[i]);
	i = -1;
	while (++i < 5)
		mlx_destroy_image(vars->mlx, vars->f_p[i]);
	i = -1;
	while (++i < 4)
		mlx_destroy_image(vars->mlx, vars->tree[i]);
	i = -1;
}

void	ft_destroy_image_height(t_data *vars)
{
	int	i;

	i = -1;
	mlx_destroy_image(vars->mlx, vars->iiiiiiiii_d_wl);
	mlx_destroy_image(vars->mlx, vars->iiiiiiooo_d_wl);
	mlx_destroy_image(vars->mlx, vars->iooiooooo_d_wl);
	mlx_destroy_image(vars->mlx, vars->ooiooiooo_d_wl);
	mlx_destroy_image(vars->mlx, vars->oooiiiiii_d_wl);
	mlx_destroy_image(vars->mlx, vars->oooiooioo_d_wl);
	mlx_destroy_image(vars->mlx, vars->oooooiooi_d_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_l_d_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_r_d_wl);
	mlx_destroy_image(vars->mlx, vars->spirit);
	mlx_destroy_image(vars->mlx, vars->iiiiiiiio_sb);
	mlx_destroy_image(vars->mlx, vars->iiiiiioii_sb);
	mlx_destroy_image(vars->mlx, vars->iioiiiiii_sb);
	mlx_destroy_image(vars->mlx, vars->oiiiiiiii_sb);
	while (++i < 16)
		mlx_destroy_image(vars->mlx, vars->boss_spawn[i]);
}

void	ft_destroy_all(t_data *vars)
{
	ft_destroy_image_one(vars);
	ft_destroy_image_two(vars);
	ft_destroy_image_three(vars);
	ft_destroy_image_four(vars);
	ft_destroy_image_five(vars);
	ft_destroy_image_six(vars);
	ft_destroy_image_seven(vars);
	ft_destroy_image_height(vars);
	mlx_destroy_display(vars->mlx);
	free(vars->mlx);
}
