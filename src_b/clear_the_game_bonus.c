/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_the_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:32:24 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 20:35:09 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	clear_the_game(t_game_data *g_d)
{
	int	x;
	int	y;

	y = 0;
	while (y < g_d->map->y)
	{
		x = 0;
		while (x < g_d->map->x)
		{
			if (g_d->map->map_data[y][x] == 'C')
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
