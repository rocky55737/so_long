#include "so_long.h"

t_map	*get_map_data(char *map_file_path);
int		map_file_open(char *map_file_path);


t_map	*get_map_data(char *map_file_path)
{
	int	map_file_fd;
	t_map	*map_data;

	map_file_fd = map_file_open(map_file_path);
	map_data = read_map_file(map_file_fd);
	close(map_file_fd);
	return (map_data);
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