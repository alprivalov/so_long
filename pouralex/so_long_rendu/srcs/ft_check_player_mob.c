/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_player_mob.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:13:23 by alprival          #+#    #+#             */
/*   Updated: 2022/06/29 21:13:24 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_player_mob(t_data *vars, int y, int x, int random)
{
	if (random == 0 && (vars->map[y][x + 1] == 'M'
		|| vars->map[y][x + 1] == 'N')
		&& (y != vars->p_y && x + 1 != vars->p_x))
		vars->mob_x++;
	if (random == 1 && (vars->map[y][x - 1] == 'M'
		|| vars->map[y][x - 1] == 'N')
		&& (y != vars->p_y && x - 1 != vars->p_x))
		vars->mob_x--;
	if (random == 2 && (vars->map[y + 1][x] == 'M'
		|| vars->map[y + 1][x] == 'N')
		&& (y + 1 != vars->p_y && x != vars->p_x))
		vars->mob_y++;
	if (random == 3 && (vars->map[y - 1][x] == 'M'
		|| vars->map[y - 1][x] == 'N')
		&& (y - 1 != vars->p_y && x != vars->p_x))
		vars->mob_y--;
}
