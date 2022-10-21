/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_err_handler2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:29:46 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 16:00:58 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_has_more_p(t_map *map)
{
	int	x_cnt;
	int	y_cnt;
	int	p_cnt;

	p_cnt = -1;
	y_cnt = 0;
	while (y_cnt < map->y)
	{
		x_cnt = 0;
		while (x_cnt < map->x)
		{
			if (map->map_data[y_cnt][x_cnt] == 'P')
				p_cnt++;
			x_cnt++;
		}
		y_cnt++;
	}
	return (p_cnt);
}
