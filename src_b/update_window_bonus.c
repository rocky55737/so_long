/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 20:20:12 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
