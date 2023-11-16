/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hud.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:17:07 by alprival          #+#    #+#             */
/*   Updated: 2022/06/30 00:17:11 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_display(t_data *vars)
{
	char	*move;

	move = ft_itoa(vars->move);
	mlx_string_put(vars->mlx, vars->win, 50,
		IMG * vars->lines + 16, 0xfff, move);
	mlx_string_put(vars->mlx, vars->win, 10,
		IMG * vars->lines + 16, 0xfff, "move :");
	free(move);
}

void	ft_hud(t_data *vars)
{
	int		x;

	x = -1;
	while (++x < vars->colonnes)
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * x, IMG * vars->lines);
	x = vars->colonnes;
	while (x != vars->colonnes - vars->hearts && x > 0)
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->heart,
			IMG * x - 32, IMG * vars->lines);
		x--;
	}
	ft_display(vars);
}
