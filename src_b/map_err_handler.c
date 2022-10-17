/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_err_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:55:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 17:25:19 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void		map_err_handler(char *map_file_path);
static int	map_is_rectangle(char *map_file_path);
static int	map_has_all_component(char *map_file_path);
static int	map_has_invalid_component(char *map_file_path);
static int	map_is_surrounded_by_wall(char *map_file_path);

void	map_err_handler(char *map_file_path)
{
	if (!map_is_rectangle(map_file_path))
	{
		write_err("so_long: map is not rectangle\n");
		exit(1);
	}
	if (!map_has_all_component(map_file_path))
	{
		write_err("so_long: map should have all component\n");
		exit(1);
	}
	if (map_has_invalid_component(map_file_path))
	{
		write_err("so_long: map has invalid component\n");
		exit(1);
	}
	if (!map_is_surrounded_by_wall(map_file_path))
	{
		write_err("so_long: map is not surrounded by wall\n");
		exit(1);
	}
}

static int	map_is_rectangle(char *map_file_path)
{
	int		x;
	int		fd;
	char	*buffer;

	x = get_map_x(map_file_path);
	fd = map_file_open(map_file_path);
	buffer = trim_nl(get_next_line(fd));
	while (buffer)
	{
		printf("%s %zu", buffer, ft_strlen(buffer));
		if (ft_strlen(buffer) != (size_t)x)
			return (0);
		free(buffer);
		buffer = trim_nl(get_next_line(fd));
	}
	close(fd);
	return (1);
}

static int	map_has_all_component(char *map_file_path)
{
	char	*charset;
	int		charset_cnt;
	char	*buffer;
	int		fd;

	charset = ft_strdup("01CEP");
	charset_cnt = 0;
	while (charset[charset_cnt])
	{
		fd = map_file_open(map_file_path);
		buffer = trim_nl(get_next_line(fd));
		while (buffer)
		{
			if (ft_strchr(buffer, charset[charset_cnt]) != 0)
				break ;
			buffer = trim_nl(get_next_line(fd));
		}
		close(fd);
		if (!buffer)
			return (0);
		charset_cnt++;
	}
	return (1);
}

static int	map_has_invalid_component(char *map_file_path)
{
	char	*charset;
	char	*buffer;
	int		buffer_cnt;
	int		fd;

	charset = ft_strdup("01CEP");
	fd = map_file_open(map_file_path);
	buffer = trim_nl(get_next_line(fd));
	while (buffer)
	{
		buffer_cnt = 0;
		while (buffer[buffer_cnt])
		{
			if (ft_strchr(charset, buffer[buffer_cnt]) == 0)
				return (1);
			buffer_cnt++;
		}
		buffer = trim_nl(get_next_line(fd));
	}
	close(fd);
	return (0);
}

static int	map_is_surrounded_by_wall(char *map_file_path)
{
	int		x;
	int		y;
	char	**map_data;
	int		x_cnt;
	int		y_cnt;

	x = get_map_x(map_file_path);
	y = get_map_y(map_file_path);
	map_data = get_map_data(map_file_path, y);
	x_cnt = 0;
	while (x_cnt < x)
	{
		if (map_data[0][x_cnt] != '1' || map_data[y][x_cnt] != '1')
			return (0);
		x_cnt++;
	}
	y_cnt = 0;
	while (y_cnt < y)
	{
		if (map_data[y_cnt][0] != '1' || map_data[y_cnt][x] != '1')
			return (0);
		y_cnt++;
	}
	return (1);
}
