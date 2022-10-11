/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_event_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:19:43 by rhong             #+#    #+#             */
/*   Updated: 2022/10/11 17:30:22 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	button_event_handler(int keycode, t_game_data *g_data)
{
	if (keycode == 27)
		destroy_game(g_data);
	if (keycode == 65 || keycode == 68 || keycode == 83 || keycode == 87)
		update_window(g_data, keycode);
}
