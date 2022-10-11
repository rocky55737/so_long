/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/11 17:55:04 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	update_window(int keycode, t_game_data *g_data);

void	update_window(int keycode, t_game_data *g_data)
{
	move_character(keycode, g_data->map);
	put_map_to_window(g_data->map);
}
