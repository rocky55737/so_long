/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_event_handler_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:19:43 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:20:19 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	button_event_handler(int keycode, t_game_data *g_data)
{
	if (keycode == 53)
		destroy_game(g_data);
	if (keycode == 0 || keycode == 1 || keycode == 2 || keycode == 13)
		update_window(keycode, g_data);
	return (0);
}
