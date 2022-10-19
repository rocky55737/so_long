/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:50:39 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int		update_window(int keycode, t_game_data *g_data);
int		get_p_x(t_game_data *g_data);
int		get_p_y(t_game_data *g_data);
void	move_character(int keycode, t_game_data *g_data);

int	update_window(int keycode, t_game_data *g_data)
{
	char	*buffer;

	move_character(keycode, g_data);
	put_map_to_window(g_data);
	g_data->mov_cnt++;
	buffer = ft_itoa(g_data->mov_cnt);
	mlx_string_put(g_data->mlx, g_data->win, 3, 3, 0, buffer);
	free(buffer);
	return (0);
}
