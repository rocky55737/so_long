/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_err_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:06:59 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 18:24:28 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_err_handler(t_game_data *g_d)
{
	int	cnt;

	cnt = 0;
	while (cnt < 5)
	{
		if (!g_d->imgs[cnt].img_ptr)
		{
			write_err("img loading err\n");
			exit(1);
		}
		cnt++;
	}
}
