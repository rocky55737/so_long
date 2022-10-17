/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:26:37 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 19:05:01 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long(int ac, char **av)
{
	t_game_data	*g_data;

	sl_input_err_handler(ac, av);
	g_data = (t_game_data *)malloc(sizeof(t_game_data));
	malloc_null_guard(g_data);
	g_data->map = get_map(av[1]);
	g_data->mlx = mlx_init();
	g_data->win = mlx_new_window(g_data->mlx, \
	g_data->map->x * 32, g_data->map->y * 32, "so_long");
	g_data->mov_cnt = 0;
	set_imgs(g_data);
	put_map_to_window(g_data);
	mlx_key_hook(g_data->win, button_event_handler, g_data);
	mlx_hook(g_data->win, 17, 0, destroy_game, g_data);
	mlx_loop(g_data->mlx);
}
