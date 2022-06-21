/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_texture_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:05 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:51:06 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_map_texture(t_data *vars)
{
	int		y;
	int		x;
	int		p;
	int		c;
	int		e;

	p = 0;
	c = 0;
	e = 0;
	y = 0;
	x = 0;
	ft_init_texture(vars);
	while (y < vars->lines)
	{
		while (x < vars->colonnes)
		{
			if (vars->map[y][x] == 'P')
				p++;
			if (vars->map[y][x] == 'C')
				c++;
			if (vars->map[y][x] == 'E')
				e++;
			if (y == 0 && vars->map[y][x] != '1')
				ft_error(vars);
			if (y == (vars->lines - 1) && vars->map[y][x] != '1')
				ft_error(vars);
			if (x == 0 && vars->map[y][x] != '1')
				ft_error(vars);
			if (x == (vars->colonnes - 1) && vars->map[y][x] != '1')
				ft_error(vars);
			ft_check_texture(vars, y, x);
			x++;
		}
		x = 0;
		y++;
	}
	vars->map[vars->p_y][vars->p_x] = '0';
	if (p != 1)
		ft_error(vars);
	if (c == 0)
		ft_error(vars);
	if (e == 0)
		ft_error(vars);
}
