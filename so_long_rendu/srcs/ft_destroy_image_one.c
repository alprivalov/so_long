/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_image_one.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:48:55 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:48:59 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy_image_one(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->slime);
	mlx_destroy_image(vars->mlx, vars->player);
	mlx_destroy_image(vars->mlx, vars->chest_player);
	mlx_destroy_image(vars->mlx, vars->road_player);
	mlx_destroy_image(vars->mlx, vars->player_wood);
	mlx_destroy_image(vars->mlx, vars->r_p_sb);
	mlx_destroy_image(vars->mlx, vars->g_pl_sb);
	mlx_destroy_image(vars->mlx, vars->exit);
	mlx_destroy_image(vars->mlx, vars->enter);
	mlx_destroy_image(vars->mlx, vars->door);
	mlx_destroy_image(vars->mlx, vars->chest);
	mlx_destroy_image(vars->mlx, vars->chestopen);
	mlx_destroy_image(vars->mlx, vars->chest_open_sb);
	mlx_destroy_image(vars->mlx, vars->chest_sb);
	mlx_destroy_image(vars->mlx, vars->chest_p_sb);
	mlx_destroy_image(vars->mlx, vars->ending);
	mlx_destroy_image(vars->mlx, vars->road_slimebiome);
	mlx_destroy_image(vars->mlx, vars->grass);
	mlx_destroy_image(vars->mlx, vars->floors);
	mlx_destroy_image(vars->mlx, vars->road);
	mlx_destroy_image(vars->mlx, vars->g_p_[0]);
	mlx_destroy_image(vars->mlx, vars->g_p_[1]);
	mlx_destroy_image(vars->mlx, vars->g_p_[2]);
}

void	ft_destroy_image_two(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->g_p_[3]);
	mlx_destroy_image(vars->mlx, vars->g_p_[4]);
	mlx_destroy_image(vars->mlx, vars->g_p_[5]);
	mlx_destroy_image(vars->mlx, vars->r_p_[0]);
	mlx_destroy_image(vars->mlx, vars->r_p_[1]);
	mlx_destroy_image(vars->mlx, vars->r_p_[2]);
	mlx_destroy_image(vars->mlx, vars->r_p_[3]);
	mlx_destroy_image(vars->mlx, vars->r_p_[4]);
	mlx_destroy_image(vars->mlx, vars->r_p_[5]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[0]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[1]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[2]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[3]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[4]);
	mlx_destroy_image(vars->mlx, vars->r_p_sb_[5]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[0]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[1]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[2]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[3]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[4]);
	mlx_destroy_image(vars->mlx, vars->g_p_sb[5]);
	mlx_destroy_image(vars->mlx, vars->log);
}

void	ft_destroy_image_three(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->long_r_log);
	mlx_destroy_image(vars->mlx, vars->long_l_log);
	mlx_destroy_image(vars->mlx, vars->book);
	mlx_destroy_image(vars->mlx, vars->bed);
	mlx_destroy_image(vars->mlx, vars->bench);
	mlx_destroy_image(vars->mlx, vars->chair);
	mlx_destroy_image(vars->mlx, vars->chest_home);
	mlx_destroy_image(vars->mlx, vars->small_h_tree);
	mlx_destroy_image(vars->mlx, vars->table);
	mlx_destroy_image(vars->mlx, vars->grave_top);
	mlx_destroy_image(vars->mlx, vars->grave_bottom);
	mlx_destroy_image(vars->mlx, vars->hole);
	mlx_destroy_image(vars->mlx, vars->skull);
	mlx_destroy_image(vars->mlx, vars->skull_bones);
	mlx_destroy_image(vars->mlx, vars->tree_stomp);
	mlx_destroy_image(vars->mlx, vars->tree[0]);
	mlx_destroy_image(vars->mlx, vars->tree[1]);
	mlx_destroy_image(vars->mlx, vars->tree[2]);
	mlx_destroy_image(vars->mlx, vars->tree[3]);
	mlx_destroy_image(vars->mlx, vars->enter_l_sb);
	mlx_destroy_image(vars->mlx, vars->enter_r_sb);
	mlx_destroy_image(vars->mlx, vars->enter_l_sb_b);
	mlx_destroy_image(vars->mlx, vars->enter_r_sb_bottom);
}

void	ft_destroy_image_four(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->ooooiioii_sb);
	mlx_destroy_image(vars->mlx, vars->oooiioiio_sb);
	mlx_destroy_image(vars->mlx, vars->oooiiiiii_sb);
	mlx_destroy_image(vars->mlx, vars->oiioiiooo_sb);
	mlx_destroy_image(vars->mlx, vars->oiioiioii_sb);
	mlx_destroy_image(vars->mlx, vars->iioiioooo_sb);
	mlx_destroy_image(vars->mlx, vars->iioiioiio_sb);
	mlx_destroy_image(vars->mlx, vars->iiiiiiooo_sb);
	mlx_destroy_image(vars->mlx, vars->iiiiiiiii_sb);
	mlx_destroy_image(vars->mlx, vars->ioootree_sb);
	mlx_destroy_image(vars->mlx, vars->oiootree_sb);
	mlx_destroy_image(vars->mlx, vars->ooiotree_sb);
	mlx_destroy_image(vars->mlx, vars->oooitree_sb);
	mlx_destroy_image(vars->mlx, vars->oooitree_s_sb);
	mlx_destroy_image(vars->mlx, vars->ooooiioii_w);
	mlx_destroy_image(vars->mlx, vars->oooiioiio_w);
	mlx_destroy_image(vars->mlx, vars->oooiiiiii_w);
	mlx_destroy_image(vars->mlx, vars->oiioiiooo_w);
	mlx_destroy_image(vars->mlx, vars->oiioiioii_w);
	mlx_destroy_image(vars->mlx, vars->iioiioooo_w);
	mlx_destroy_image(vars->mlx, vars->iioiioiio_w);
	mlx_destroy_image(vars->mlx, vars->iiiiiiooo_w);
}

void	ft_destroy_image_five(t_data *vars)
{
	mlx_destroy_image(vars->mlx, vars->iiiiiiiii_w);
	mlx_destroy_image(vars->mlx, vars->ooooiioio_p);
	mlx_destroy_image(vars->mlx, vars->oooiiooio_p);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_b_p);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_t_p);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_l_p);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_r_p);
	mlx_destroy_image(vars->mlx, vars->oiooiiooo_p);
	mlx_destroy_image(vars->mlx, vars->oioiioooo_p);
	mlx_destroy_image(vars->mlx, vars->oiooiiooo_wall);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_wall);
	mlx_destroy_image(vars->mlx, vars->oooiiooio_wall);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_wall);
	mlx_destroy_image(vars->mlx, vars->ooooioooo_wall);
	mlx_destroy_image(vars->mlx, vars->ooooiioio_wall);
	mlx_destroy_image(vars->mlx, vars->oioiioooo_wall);
	mlx_destroy_image(vars->mlx, vars->ooooiooio_wall);
	mlx_destroy_image(vars->mlx, vars->oooiioooo_wall);
	mlx_destroy_image(vars->mlx, vars->ooooiiooo_wall);
	mlx_destroy_image(vars->mlx, vars->oooiiiooo_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_l_s_wl);
	mlx_destroy_image(vars->mlx, vars->oiooiooio_r_s_wl);
}
