/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:37:44 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:25:51 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	*get_map(char *map_file_path);
int		map_file_open(char *map_file_path);
int		get_map_x(char *map_file_path);
int		get_map_y(char *map_file_path);
char	**get_map_data(char *map_file_path, int map_y);

t_map	*get_map(char *map_file_path)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	malloc_null_guard((void *)map);
	map->x = get_map_x(map_file_path);
	map->y = get_map_y(map_file_path);
	map->map_data = get_map_data(map_file_path, map->y);
	map_err_handler(map);
	return (map);
}

int	map_file_open(char *map_file_path)
{
	int	map_file_fd;

	map_file_fd = open(map_file_path, O_RDONLY, 0);
	if (map_file_fd == -1)
	{
		perror("so_long: map: ");
		exit(1);
	}
	return (map_file_fd);
}

int	get_map_x(char *map_file_path)
{
	int	x;
	int	map_fd;

	map_fd = map_file_open(map_file_path);
	x = ft_strlen(trim_nl(get_next_line(map_fd)));
	close(map_fd);
	return (x);
}

int	get_map_y(char *map_file_path)
{
	int	y;
	int	map_fd;

	y = 0;
	map_fd = map_file_open(map_file_path);
	while (get_next_line(map_fd))
		y++;
	close(map_fd);
	return (y);
}

char	**get_map_data(char *map_file_path, int map_y)
{
	char	**map_data;
	int		map_fd;
	char	*buffer;
	int		y_cnt;

	map_data = (char **)malloc(sizeof(char *) * (map_y + 1));
	malloc_null_guard((void *)map_data);
	map_fd = map_file_open(map_file_path);
	buffer = trim_nl(get_next_line(map_fd));
	y_cnt = 0;
	while (y_cnt < map_y)
	{
		map_data[y_cnt] = buffer;
		buffer = trim_nl(get_next_line(map_fd));
		y_cnt++;
	}
	map_data[map_y] = 0;
	close(map_fd);
	return (map_data);
}
