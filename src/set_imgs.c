/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_imgs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:47:51 by rhong             #+#    #+#             */
/*   Updated: 2022/10/11 19:59:54 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_imgs(t_game_data *g_d)
{
	g_d->imgs[0].relative_path = "tile xpm";
	g_d->imgs[0].img_ptr = mlx_xpm_file_to_image(g_d->mlx, g_d->imgs[0], \
	&(g_d->imgs[0].img_width), &(g_d->imgs[0].img_width));

	g_d->imgs[1].relative_path = "wall xpm";
	g_d->imgs[1].img_ptr = mlx_xpm_file_to_image(g_d->mlx, g_d->imgs[1], \
	&(g_d->imgs[1].img_width), &(g_d->imgs[1].img_width));

	g_d->imgs[2].relative_path = "collectible xpm";
	g_d->imgs[2].img_ptr = mlx_xpm_file_to_image(g_d->mlx, g_d->imgs[2], \
	&(g_d->imgs[2].img_width), &(g_d->imgs[2].img_width));

	g_d->imgs[3].relative_path = "exit xpm";
	g_d->imgs[3].img_ptr = mlx_xpm_file_to_image(g_d->mlx, g_d->imgs[3], \
	&(g_d->imgs[3].img_width), &(g_d->imgs[3].img_width));

	g_d->imgs[4].relative_path = "player xpm";
	g_d->imgs[4].img_ptr = mlx_xpm_file_to_image(g_d->mlx, g_d->imgs[4], \
	&(g_d->imgs[4].img_width), &(g_d->imgs[4].img_width));
}