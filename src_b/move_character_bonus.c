/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_character.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:18:47 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 20:47:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_character(int keycode, t_game_data *g_data);
void	move_left(t_game_data *g_data);
void	move_right(t_game_data *g_data);
void	move_up(t_game_data *g_data);
void	move_down(t_game_data *g_data);

void	move_character(int keycode, t_game_data *g_data)
{
	if (keycode == 0)
		move_left(g_data);
	if (keycode == 2)
		move_right(g_data);
	if (keycode == 13)
		move_up(g_data);
	if (keycode == 1)
		move_down(g_data);
}

void	move_left(t_game_data *g_data)
{
	int	p_x;
	int	p_y;

	p_x = get_p_x(g_data);
	p_y = get_p_y(g_data);
	if (g_data->map->map_data[p_y][p_x - 1] == 'E')
	{
		if (clear_the_game(g_data))
			destroy_game(g_data);
	}
	else if (g_data->map->map_data[p_y][p_x - 1] != '1')
	{
		g_data->map->map_data[p_y][p_x] = '0';
		g_data->map->map_data[p_y][p_x - 1] = 'P';
		if (g_data->p_state != 4)
			g_data->p_state = 4;
		else
			g_data->p_state = 5;
	}
}

void	move_right(t_game_data *g_data)
{
	int	p_x;
	int	p_y;

	p_x = get_p_x(g_data);
	p_y = get_p_y(g_data);
	if (g_data->map->map_data[p_y][p_x + 1] == 'E')
	{
		if (clear_the_game(g_data))
			destroy_game(g_data);
	}
	else if (g_data->map->map_data[p_y][p_x + 1] != '1')
	{
		g_data->map->map_data[p_y][p_x] = '0';
		g_data->map->map_data[p_y][p_x + 1] = 'P';
		if (g_data->p_state != 6)
			g_data->p_state = 6;
		else
			g_data->p_state = 7;
	}
}

void	move_up(t_game_data *g_data)
{
	int	p_x;
	int	p_y;

	p_x = get_p_x(g_data);
	p_y = get_p_y(g_data);
	if (g_data->map->map_data[p_y - 1][p_x] == 'E')
	{
		if (clear_the_game(g_data))
			destroy_game(g_data);
	}
	else if (g_data->map->map_data[p_y - 1][p_x] != '1')
	{
		g_data->map->map_data[p_y][p_x] = '0';
		g_data->map->map_data[p_y - 1][p_x] = 'P';
		if (g_data->p_state != 2)
			g_data->p_state = 2;
		else
			g_data->p_state = 3;
	}
}

void	move_down(t_game_data *g_data)
{
	int	p_x;
	int	p_y;

	p_x = get_p_x(g_data);
	p_y = get_p_y(g_data);
	if (g_data->map->map_data[p_y + 1][p_x] == 'E')
	{
		if (clear_the_game(g_data))
			destroy_game(g_data);
	}
	else if (g_data->map->map_data[p_y + 1][p_x] != '1')
	{
		g_data->map->map_data[p_y][p_x] = '0';
		g_data->map->map_data[p_y + 1][p_x] = 'P';
		if (g_data->p_state != 0)
			g_data->p_state = 0;
		else
			g_data->p_state = 1;
	}
}
