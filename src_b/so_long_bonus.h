/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:32 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 20:35:43 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "../minilibx_opengl/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_map
{
	char	**map_data;
	int		x;
	int		y;
}	t_map;

typedef struct s_img
{
	void	*img_ptr;
	char	*relative_path;
	int		img_w;
	int		img_h;
}	t_img;

typedef struct s_game_data
{
	t_map	*map;
	t_img	imgs[5];
	t_img	p_imgs[8];
	int		p_state;
	void	*mlx;
	void	*win;
	int		mov_cnt;
}	t_game_data;

void	sl_input_err_handler(int ac, char **av);

void	write_err(char	*err_msg);

void	malloc_null_guard(void *ptr);

t_map	*get_map(char *map_file_path);
int		map_file_open(char *map_file_path);
int		get_map_x(char *map_file_path);
int		get_map_y(char *map_file_path);
char	**get_map_data(char *map_file_path, int map_y);

void	map_err_handler(char *map_file_path);

int		destroy_game(t_game_data *g_data);

int		button_event_handler(int keycode, t_game_data *g_data);
void	set_imgs(t_game_data *g_d);
void	set_p_imgs(t_game_data *g_d);

void	put_map_to_window(t_game_data *g_d);
int		update_window(int keycode, t_game_data *g_data);

char	*trim_nl(char *str);

void	so_long(int ac, char **av);
void	img_err_handler(t_game_data *g_d);

int		get_p_x(t_game_data *g_data);
int		get_p_y(t_game_data *g_data);
void	move_character(int keycode, t_game_data *g_data);

int		clear_the_game(t_game_data *g_d);

#endif