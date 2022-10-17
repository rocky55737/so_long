/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_imgs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:47:51 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 18:34:06 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_imgs(t_game_data *g_d)
{
	g_d->imgs[0].relative_path = "./assets/etc/t.xpm";
	g_d->imgs[0].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[0].relative_path, &(g_d->imgs[0].img_w), &(g_d->imgs[0].img_h));
	g_d->imgs[1].relative_path = "./assets/etc/w.xpm";
	g_d->imgs[1].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[1].relative_path, &(g_d->imgs[1].img_w), &(g_d->imgs[1].img_h));
	g_d->imgs[2].relative_path = "./assets/etc/c.xpm";
	g_d->imgs[2].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[2].relative_path, &(g_d->imgs[2].img_w), &(g_d->imgs[2].img_h));
	g_d->imgs[3].relative_path = "./assets/etc/e.xpm";
	g_d->imgs[3].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[3].relative_path, &(g_d->imgs[3].img_w), &(g_d->imgs[3].img_h));
	g_d->imgs[4].relative_path = "./assets/player/0.xpm";
	g_d->imgs[4].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[4].relative_path, &(g_d->imgs[4].img_w), &(g_d->imgs[4].img_h));
	img_err_handler(g_d);
}
