/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:32 by rhong             #+#    #+#             */
/*   Updated: 2022/10/05 17:22:04 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>

typedef struct s_map
{
    char    **map_data
    int     x;
    int     y;
} t_map;

void	sl_input_err_handler(int ac);

#endif