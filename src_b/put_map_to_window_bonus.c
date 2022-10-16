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

#include "so_long_bonus.h"

void	put_map_to_window(int keycode, t_game_data *g_d);
void	put_exit_to_window(t_game_data *g_d, int x, int y);
void	put_wall_to_window(t_game_data *g_d, int x, int y);
void	put_collectible_to_window(t_game_data *g_d, int x, int y);
void	put_player_to_window(t_game_data *g_d, int x, int y, int keycode);

void	put_map_to_window(int keycode, t_game_data *g_d)
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
				put_player_to_window(g_d, x, y, keycode);
			else if (g_d->map->map_data[x][y] == 'M')
				put_monster_to_window(g_d, x, y);
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

void	put_player_to_window(t_game_data *g_d, int x, int y, int keycode)
{
	if (keycode == 65)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[4].img_ptr, x * 50, y * 50);
	else if (keycode == 68)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[6].img_ptr, x * 50, y * 50);
	else if (keycode == 83)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[0].img_ptr, x * 50, y * 50);
	else if (keycode == 87)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[2].img_ptr, x * 50, y * 50);
}
