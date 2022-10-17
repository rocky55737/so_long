/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map_to_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:54:25 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 19:22:18 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_map_to_window(t_game_data *g_d);
void	put_elements(t_game_data *g_d);

void	put_map_to_window(t_game_data *g_d)
{
	int	x;
	int	y;

	y = 0;
	while (y < g_d->map->y)
	{
		x = 0;
		while (x < g_d->map->x)
		{
			mlx_put_image_to_window(g_d->mlx, g_d->win, \
			g_d->imgs[0].img_ptr, x * 32, y * 32);
			x++;
		}
		y++;
	}
	put_elements(g_d);
}

void	put_elements(t_game_data *g_d)
{
	int	x;
	int	y;

	y = 0;
	while (y < g_d->map->y)
	{
		x = 0;
		while (x < g_d->map->x)
		{
			if (g_d->map->map_data[y][x] == '1')
				mlx_put_image_to_window(g_d->mlx, g_d->win, \
				g_d->imgs[1].img_ptr, x * 32, y * 32);
			else if (g_d->map->map_data[y][x] == 'C')
				mlx_put_image_to_window(g_d->mlx, g_d->win, \
				g_d->imgs[2].img_ptr, x * 32, y * 32);
			else if (g_d->map->map_data[y][x] == 'E')
				mlx_put_image_to_window(g_d->mlx, g_d->win, \
				g_d->imgs[3].img_ptr, x * 32, y * 32);
			else if (g_d->map->map_data[y][x] == 'M')
				mlx_put_image_to_window(g_d->mlx, g_d->win, \
				g_d->imgs[4].img_ptr, x * 32, y * 32);
			x++;
		}
		y++;
	}
}
