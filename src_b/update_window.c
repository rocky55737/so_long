/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/14 18:12:05 by rhong            ###   ########.fr       */
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
	return (0);
}

void	move_character(int keycode, t_game_data *g_data)
{
	if (keycode == 65)
	{
		if (g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) - 1] != 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) - 1] != '1')
			{
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data)] = '0';
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) - 1] = 'P';
			}
	}
	if (keycode == 68)
	{
		if (g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) + 1] != 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) + 1] != '1')
			{
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data)] = '0';
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data) + 1] = 'P';
			}
	}
	if (keycode == 83)
	{
		if (g_data->map->map_data[get_p_y(g_data) - 1][get_p_x(g_data)] != 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[get_p_y(g_data) - 1][get_p_x(g_data)] != '1')
			{
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data)] = '0';
				g_data->map->map_data[get_p_y(g_data) - 1][get_p_x(g_data)] = 'P';
			}
	}
	if (keycode == 87)
	{
		if (g_data->map->map_data[get_p_y(g_data) + 1][get_p_x(g_data)] != 'E')
			destroy_game(g_data);
		if (g_data->map->map_data[get_p_y(g_data) + 1][get_p_x(g_data)] != '1')
			{
				g_data->map->map_data[get_p_y(g_data)][get_p_x(g_data)] = '0';
				g_data->map->map_data[get_p_y(g_data) + 1][get_p_x(g_data)] = 'P';
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
