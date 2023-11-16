/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:50:29 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:50:30 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move_up(t_data *vars, int keycode)
{
	ft_move(vars, keycode, vars->p_y - 1, vars->p_x);
}

void	ft_move_left(t_data *vars, int keycode)
{
	ft_move(vars, keycode, vars->p_y, vars->p_x - 1);
}

void	ft_move_right(t_data *vars, int keycode)
{
	ft_move(vars, keycode, vars->p_y, vars->p_x + 1);
}

void	ft_move_down(t_data *vars, int keycode)
{
	ft_move(vars, keycode, vars->p_y + 1, vars->p_x);
}
