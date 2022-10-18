/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_err_handler_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:55:40 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:58:27 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void		map_err_handler(t_map *map);
static int	map_is_rectangle(t_map *map);
static int	map_has_all_component(t_map *map);
static int	map_has_invalid_component(t_map *map);
static int	map_is_surrounded_by_wall(t_map *map);

void	map_err_handler(t_map *map)
{
	if (!map_is_rectangle(map))
	{
		write_err("so_long: map is not rectangle\n");
		exit(1);
	}
	if (!map_has_all_component(map))
	{
		write_err("so_long: map should have all component\n");
		exit(1);
	}
	if (map_has_invalid_component(map))
	{
		write_err("so_long: map has invalid component\n");
		exit(1);
	}
	if (!map_is_surrounded_by_wall(map))
	{
		write_err("so_long: map is not surrounded by wall\n");
		exit(1);
	}
}

static int	map_is_rectangle(t_map *map)
{
	int	y_cnt;

	y_cnt = 0;
	while (y_cnt < map->y)
	{
		if (ft_strlen(map->map_data[y_cnt]) != (size_t)map->x)
			return (0);
		y_cnt++;
	}
	return (1);
}

static int	map_has_all_component(t_map *map)
{
	char	*charset;
	int		charset_cnt;
	int		y_cnt;

	charset = ft_strdup("1CEP");
	charset_cnt = 0;
	while (charset[charset_cnt])
	{
		y_cnt = 0;
		while (y_cnt < map->y)
		{
			if (ft_strchr(map->map_data[y_cnt], charset[charset_cnt]) != 0)
				break ;
			y_cnt++;
		}
		if (y_cnt == map->y)
		{
			free(charset);
			return (0);
		}
		charset_cnt++;
	}
	free(charset);
	return (1);
}

static int	map_has_invalid_component(t_map *map)
{
	char	*charset;
	int		y_cnt;
	int		x_cnt;

	charset = ft_strdup("01CEPM");
	y_cnt = 0;
	while (y_cnt < map->y)
	{
		x_cnt = 0;
		while (map->map_data[y_cnt][x_cnt])
		{
			if (ft_strchr(charset, map->map_data[y_cnt][x_cnt]) == 0)
			{
				free(charset);
				return (1);
			}
			x_cnt++;
		}
		y_cnt++;
	}
	free(charset);
	return (0);
}

static int	map_is_surrounded_by_wall(t_map *map)
{
	int		x_cnt;
	int		y_cnt;

	x_cnt = 0;
	while (x_cnt < map->x)
	{
		if (map->map_data[0][x_cnt] != '1' || \
		map->map_data[map->y - 1][x_cnt] != '1')
			return (0);
		x_cnt++;
	}
	y_cnt = 0;
	while (y_cnt < map->y)
	{
		if (map->map_data[y_cnt][0] != '1' || \
		map->map_data[y_cnt][map->x - 1] != '1')
			return (0);
		y_cnt++;
	}
	return (1);
}
