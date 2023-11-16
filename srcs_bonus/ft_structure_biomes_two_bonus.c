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

#include "so_long_bonus.h"

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
