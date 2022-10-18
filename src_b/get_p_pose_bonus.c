/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_p_pose_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:19:48 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:47:49 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	get_p_x(t_game_data *g_data);
int	get_p_y(t_game_data *g_data);

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
