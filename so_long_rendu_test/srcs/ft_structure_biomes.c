/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_biomes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:51:59 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:00 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_ext_sb(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'U' || vars->map[y][x] == '0' ||
		vars->map[y][x] == 'J' || vars->map[y][x] == 'L' ||
		vars->map[y][x] == 'F' || vars->map[y][x] == 'W' ||
		vars->map[y][x] == '1' || vars->map[y][x] == 'S')
		return (1);
	return (0);
}

int	ft_int_sb(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'M' || vars->map[y][x] == 'Y' ||
		vars->map[y][x] == 'G' || vars->map[y][x] == 'V' ||
		vars->map[y][x] == 'W' || vars->map[y][x] == 'E' ||
		vars->map[y][x] == 'S' || vars->map[y][x] == 'Q' ||
		vars->map[y][x] == 'X' || vars->map[y][x] == '8' ||
		vars->map[y][x] == '6' || vars->map[y][x] == '7' ||
		vars->map[y][x] == '5' || vars->map[y][x] == '4' ||
		vars->map[y][x] == 'C' || vars->map[y][x] == '2')
		return (1);
	return (0);
}

int	ft_ext_w(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'U' || vars->map[y][x] == '0' ||
		vars->map[y][x] == 'J' || vars->map[y][x] == 'L' ||
		vars->map[y][x] == 'F' || vars->map[y][x] == 'W')
		return (1);
	return (0);
}

int	ft_ext_house(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'J' || vars->map[y][x] == 'U' ||
		vars->map[y][x] == '0' || vars->map[y][x] == 'L' ||
		vars->map[y][x] == 'F' || vars->map[y][x] == 'Z' ||
		vars->map[y][x] == 'M' || vars->map[y][x] == 'G')
		return (1);
	return (0);
}

int	ft_house(t_data *vars, int y, int x)
{
	if (vars->map[y][x] == 'T' || vars->map[y][x] == 'A' ||
		vars->map[y][x] == 'I' || vars->map[y][x] == 'K' ||
		vars->map[y][x] == 'B' || vars->map[y][x] == 'S')
		return (1);
	return (0);
}
