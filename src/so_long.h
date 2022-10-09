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
# include <stdlib.h>
# include <unistd.h>
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_map
{
    char    **map_data
    int     x;
    int     y;
} t_map;

typedef struct s_img
{
    void    *img;
    char    *relative_path;
    int     img_width;
    int     img_height;
} t_img;


void	sl_input_err_handler(int ac);

void	write_err(char	*err_msg);

void	malloc_null_guard(void *ptr);

t_map	*get_map(char *map_file_path);
int		map_file_open(char *map_file_path);
int		get_map_x(char *map_file_path);
int		get_map_y(char *map_file_path);
char	**get_map_data(char *map_file_path);

void	map_err_handler(char *map_file_path);

#endif