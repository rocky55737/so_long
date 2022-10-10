/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map_to_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:54:25 by rhong             #+#    #+#             */
/*   Updated: 2022/10/10 16:54:27 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_map_to_window(t_map map);

void	put_map_to_window(t_map map)
{
	put_ground_to_window(map);
	put_wall_to_window(map);
	put_collectible_to_window(map);
	put_character_to_window(map);
	put_exit_to_window(map);
}
