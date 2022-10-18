/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patrol_monster_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:56:01 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 20:02:42 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int		patrol_monster(t_game_data *g_d);
void	monster_left(t_game_data *g_d);
void	monster_right(t_game_data *g_d);

int	patrol_monster(t_game_data *g_d)
{
	g_d->time++;
	if (g_d->time == 10000)
	{
		monster_left(g_d);
		put_map_to_window(g_d);
		mlx_string_put(g_d->mlx, g_d->win, 3, 3, 0, ft_itoa(g_d->mov_cnt));
		return (0);
	}
	else if (g_d->time == 20000)
	{
		monster_right(g_d);
		put_map_to_window(g_d);
		mlx_string_put(g_d->mlx, g_d->win, 3, 3, 0, ft_itoa(g_d->mov_cnt));
		g_d->time = 0;
		return (0);
	}
	return (0);
}

void	monster_left(t_game_data *g_d)
{
	int	x_cnt;
	int	y_cnt;

	y_cnt = 0;
	while (y_cnt < g_d->map->y)
	{
		x_cnt = 0;
		while (x_cnt < g_d->map->x)
		{
			if (g_d->map->map_data[y_cnt][x_cnt] == 'M')
			{
				if (g_d->map->map_data[y_cnt][x_cnt - 1] == 'P')
					destroy_game(g_d);
				if (g_d->map->map_data[y_cnt][x_cnt - 1] == '0')
				{
					g_d->map->map_data[y_cnt][x_cnt] = '0';
					g_d->map->map_data[y_cnt][x_cnt - 1] = 'M';
				}
			}
			x_cnt++;
		}
		y_cnt++;
	}
}

void	monster_right(t_game_data *g_d)
{
	int	x_cnt;
	int	y_cnt;

	y_cnt = 0;
	while (y_cnt < g_d->map->y)
	{
		x_cnt = 0;
		while (x_cnt < g_d->map->x)
		{
			if (g_d->map->map_data[y_cnt][x_cnt] == 'M')
			{
				if (g_d->map->map_data[y_cnt][x_cnt + 1] == 'P')
					destroy_game(g_d);
				if (g_d->map->map_data[y_cnt][x_cnt + 1] == '0')
				{
					g_d->map->map_data[y_cnt][x_cnt] = '0';
					g_d->map->map_data[y_cnt][x_cnt + 1] = 'M';
					x_cnt++;
				}
			}
			x_cnt++;
		}
		y_cnt++;
	}
}
