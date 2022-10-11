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
	g_d->imgs[0].img_ptr = mlx_xpm_file_to_image()
}