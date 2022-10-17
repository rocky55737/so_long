/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 19:40:38 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		update_window(int keycode, t_game_data *g_data);
int		get_p_x(t_game_data *g_data);
int		get_p_y(t_game_data *g_data);
void	move_character(int keycode, t_game_data *g_data);

int	update_window(int keycode, t_game_data *g_data)
{
	move_character(keycode, g_data);
	put_map_to_window(g_data);
	g_data->mov_cnt++;
	printf("%d\n", g_data->mov_cnt);
	return (0);
}

void	move_character(int keycode, t_game_data *g_data)
{
	int	p_x;
	int	p_y;

	p_x = get_p_x(g_data);
	p_y = get_p_y(g_data);
	if (keycode == 0)
	{
		if (g_data->map->map_data[p_y][p_x - 1] == 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[p_y][p_x - 1] != '1')
			{
				g_data->map->map_data[p_y][p_x] = '0';
				g_data->map->map_data[p_y][p_x - 1] = 'P';
			}
	}
	if (keycode == 2)
	{
		if (g_data->map->map_data[p_y][p_x + 1] == 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[p_y][p_x + 1] != '1')
			{
				g_data->map->map_data[p_y][p_x] = '0';
				g_data->map->map_data[p_y][p_x + 1] = 'P';
			}
	}
	if (keycode == 13)
	{
		if (g_data->map->map_data[p_y - 1][p_x] == 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[p_y - 1][p_x] != '1')
			{
				g_data->map->map_data[p_y][p_x] = '0';
				g_data->map->map_data[p_y - 1][p_x] = 'P';
			}
	}
	if (keycode == 1)
	{
		if (g_data->map->map_data[p_y + 1][p_x] == 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[p_y + 1][p_x] != '1')
			{
				g_data->map->map_data[p_y][p_x] = '0';
				g_data->map->map_data[p_y + 1][p_x] = 'P';
			}
	}
}

int	get_p_x(t_game_data *g_data)
{
	int	x;
	int	y;

	y = 0;
	while (y < g_data->map->y)
	{
		x = 0;
		while (x < g_data->map->x)
		{
			if (g_data->map->map_data[y][x] == 'P')
				return (x);
			x++;
		}
		y++;
	}
	return (-1);
}

int	get_p_y(t_game_data *g_data)
{
	int	x;
	int	y;

	y = 0;
	while (y < g_data->map->y)
	{
		x = 0;
		while (x < g_data->map->x)
		{
			if (g_data->map->map_data[y][x] == 'P')
				return (y);
			x++;
		}
		y++;
	}
	return (-1);
}
