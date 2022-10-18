/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_p_imgs_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:18:26 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 18:38:58 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	set_p_imgs(t_game_data *g_d);
void	set_p_imgs_front(t_game_data *g_d);
void	set_p_imgs_back(t_game_data *g_d);
void	set_p_imgs_left(t_game_data *g_d);
void	set_p_imgs_right(t_game_data *g_d);

void	set_p_imgs(t_game_data *g_d)
{
	set_p_imgs_front(g_d);
	set_p_imgs_back(g_d);
	set_p_imgs_left(g_d);
	set_p_imgs_right(g_d);
	p_img_err_hander(g_d);
}

void	set_p_imgs_front(t_game_data *g_d)
{
	g_d->p_imgs[0].relative_path = "./assets/player/0.xpm";
	g_d->p_imgs[0].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[0].relative_path, &(g_d->p_imgs[0].img_w), \
	&(g_d->p_imgs[0].img_h));
	g_d->p_imgs[1].relative_path = "./assets/player/1.xpm";
	g_d->p_imgs[1].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[1].relative_path, &(g_d->p_imgs[1].img_w), \
	&(g_d->p_imgs[1].img_h));
}

void	set_p_imgs_back(t_game_data *g_d)
{
	g_d->p_imgs[2].relative_path = "./assets/player/2.xpm";
	g_d->p_imgs[2].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[2].relative_path, &(g_d->p_imgs[2].img_w), \
	&(g_d->p_imgs[2].img_h));
	g_d->p_imgs[3].relative_path = "./assets/player/3.xpm";
	g_d->p_imgs[3].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[3].relative_path, &(g_d->p_imgs[3].img_w), \
	&(g_d->p_imgs[3].img_h));
}

void	set_p_imgs_left(t_game_data *g_d)
{
	g_d->p_imgs[4].relative_path = "./assets/player/4.xpm";
	g_d->p_imgs[4].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[4].relative_path, &(g_d->p_imgs[4].img_w), \
	&(g_d->p_imgs[4].img_h));
	g_d->p_imgs[5].relative_path = "./assets/player/5.xpm";
	g_d->p_imgs[5].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[5].relative_path, &(g_d->p_imgs[5].img_w), \
	&(g_d->p_imgs[5].img_h));
}

void	set_p_imgs_right(t_game_data *g_d)
{
	g_d->p_imgs[6].relative_path = "./assets/player/6.xpm";
	g_d->p_imgs[6].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[6].relative_path, &(g_d->p_imgs[6].img_w), \
	&(g_d->p_imgs[6].img_h));
	g_d->p_imgs[7].relative_path = "./assets/player/7.xpm";
	g_d->p_imgs[7].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->p_imgs[7].relative_path, &(g_d->p_imgs[7].img_w), \
	&(g_d->p_imgs[7].img_h));
}
