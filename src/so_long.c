/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:26:37 by rhong             #+#    #+#             */
/*   Updated: 2022/10/05 17:27:46 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long(int ac, char **av)
{
	t_map	*map;
	void	*mlx;
	void	*mlx_window;

	sl_input_err_handler(ac);
	map = get_map(av[1]);
	mlx = mlx_init();
	mlx_window = mlx_new_window(mlx, map->x * , map->y * , "so_long");

	//img init
	//
	//draw_window
	put_map_to_window(map);

	mlx_key_hook(mlx_window, mouse_event,window);
	mlx_mouse_hook(mlx_window, key_event, window);
	mlx_loop_hook(mlx_window, update_window, window);
	mlx_loop(mlx);
}