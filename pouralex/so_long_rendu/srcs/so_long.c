/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:52:36 by alprival          #+#    #+#             */
/*   Updated: 2022/06/18 14:52:37 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close_key(int keycode, t_data *vars)
{
	int	i;

	i = vars->lines - 1;
	mlx_destroy_window(vars->mlx, vars->win);
	while (i >= 0)
	{
		free(vars->map[i]);
		i--;
	}
	free(vars->map);
	ft_destroy_all(vars);
	exit(0);
	return (0);
}

int	ft_close_mouse(t_data *vars)
{
	int	i;

	mlx_destroy_window(vars->mlx, vars->win);
	i = vars->lines - 1;
	while (i >= 0)
	{
		free(vars->map[i]);
		i--;
	}
	free(vars->map);
	ft_destroy_all(vars);
	exit(0);
	return (0);
}

void	ft_hud(t_data *vars)
{
	int		x;
	char	*n_chest;
	char	*n_chestopen;
	char	*move;
	char	*boss_hp;

	boss_hp = ft_itoa(vars->boss_hp);
	move = ft_itoa(vars->move);
	n_chestopen = ft_itoa(vars->n_chestopen);
	n_chest = ft_itoa(vars->n_chests);
	x = -1;
	while (++x < vars->colonnes)
		mlx_put_image_to_window(vars->mlx, vars->win, vars->grass,
			IMG * x, IMG * vars->lines);
	x = vars->colonnes;
	while (x != vars->colonnes - vars->hearts)
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->heart,
			IMG * x - 32, IMG * vars->lines);
		x--;
	}
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->grass, 50, IMG * vars->lines);
	mlx_string_put(vars->mlx, vars->win, 50,
		IMG * vars->lines + 16, 0xfff, move);
	mlx_string_put(vars->mlx, vars->win, 10,
		IMG * vars->lines + 16, 0xfff, "move :");
	mlx_put_image_to_window(vars->mlx, vars->win,
		vars->grass, 150, IMG * vars->lines);
	mlx_string_put(vars->mlx, vars->win, 130,
		IMG * vars->lines + 16, 0xfff, n_chestopen);
	mlx_string_put(vars->mlx, vars->win, 80,
		IMG * vars->lines + 16, 0xfff, "chest :");
	mlx_string_put(vars->mlx, vars->win, 150,
		IMG * vars->lines + 16, 0xfff, n_chest);
	mlx_string_put(vars->mlx, vars->win, 140,
		IMG * vars->lines + 16, 0xfff, "/");
	mlx_string_put(vars->mlx, vars->win, 180,
		IMG * vars->lines + 16, 0xfff, boss_hp);
	free(n_chest);
	free(boss_hp);
	free(n_chestopen);
	free(move);
}

int	main(int ac, char **av)
{
	t_data	vars;
	char	*line;

	vars.n_chests = 0;
	vars.n_chestopen = 0;
	vars.move = 0;
	if (checks_error_argument(ac, av[1]) == 0)
		return (0);
	ft_init_vars(&vars);
	ft_parsing_map(av[1], &vars);
	if (vars.error != 0)
	{
		printf("wrong map\n");
		return (0);
	}
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, IMG * vars.colonnes,
			IMG * (vars.lines + 1), "Hello world!");
	ft_init_texture(&vars);
	ft_init_base_map(av[1], &vars);
	mlx_loop_hook(vars.mlx, ft_player_anim, &vars);
	mlx_hook(vars.win, 2, 1L << 0, ft_move, &vars);
	mlx_hook(vars.win, 17, 1L << 2, ft_close_mouse, &vars);
	mlx_loop(vars.mlx);
}
