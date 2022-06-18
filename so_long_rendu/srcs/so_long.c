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

int	ft_error(t_data *vars)
{
	int	i;

	i = 0;
	printf("map error\n");
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

int	main(int ac, char **av)
{
	t_data	vars;
	char	*line;

	vars.mlx = mlx_init();
	ft_init_vars(&vars);
	if (ac != 2)
	{
		printf("please put map\n");
		ft_destroy_all(&vars);
		return (0);
	}
	if (ft_parsing_map(av[1], &vars) == 0)
	{
		printf("invalid map");
		ft_destroy_all(&vars);
		return (0);
	}
	vars.win = mlx_new_window(vars.mlx, IMG * vars.colonnes,
			IMG * vars.lines, "Hello world!");
	ft_init_map(av[1], &vars);
	ft_init_map_texture(&vars);
	mlx_loop_hook(vars.mlx, ft_player_anim, &vars);
	mlx_hook(vars.win, 2, 1L << 0, ft_move, &vars);
	mlx_hook(vars.win, 17, 1L << 2, ft_close_mouse, &vars);
	mlx_loop(vars.mlx);
}
