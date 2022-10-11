/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:26:37 by rhong             #+#    #+#             */
/*   Updated: 2022/10/11 18:14:37 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long(int ac, char **av)
{
	t_game_data	*g_data;

	sl_input_err_handler(ac);
	g_data = (t_game_data *)malloc(sizeof(t_game_data));
	malloc_null_guard(g_data);
	g_data->map = get_map(av[1]);
	g_data->mlx = mlx_init();
	g_data->win = mlx_new_window(g_data->mlx, g_data->map->x * 50, g_data->map->y * 50, "so_long");

	//get img
	//
	//draw_window
	put_map_to_window(map);

	mlx_key_hook(mlx_window, mouse_event,window);
	mlx_mouse_hook(mlx_window, key_event, window);
	mlx_loop_hook(mlx_window, update_window, window);
	mlx_loop(mlx);
}