/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map_to_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:54:25 by rhong             #+#    #+#             */
/*   Updated: 2022/10/14 18:07:13 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_map_to_window(t_game_data *g_d);
void	put_exit_to_window(t_game_data *g_d, int x, int y);
void	put_wall_to_window(t_game_data *g_d, int x, int y);
void	put_collectible_to_window(t_game_data *g_d, int x, int y);
void	put_player_to_window(t_game_data *g_d, int x, int y);

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
			mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[0].img_ptr, x * 50, y * 50);
			x++;
		}
		y++;
	}
	while (y < g_d->map->y)
	{
		x = 0;
		while (x < g_d->map->x)
		{
			if (g_d->map->map_data[x][y] == '1')
				put_wall_to_window(g_d, x, y);
			else if (g_d->map->map_data[x][y] == 'C')
				put_collectible_to_window(g_d, x, y);
			else if (g_d->map->map_data[x][y] == 'E')
				put_exit_to_window(g_d, x, y);
			else if (g_d->map->map_data[x][y] == 'P')
				put_player_to_window(g_d, x, y);
			x++;
		}
		y++;
	}
}

void	put_exit_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, \
	g_d->imgs[2].img_ptr, x * 50, y * 50);
}

void	put_wall_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[1].img_ptr, x * 50, y * 50);
}

void	put_collectible_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[3].img_ptr, x * 50, y * 50);
}

void	put_player_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[4].img_ptr, x * 50, y * 50);
}
