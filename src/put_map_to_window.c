#include "so_long.h"

void	put_map_to_window(t_map map);

void	put_map_to_window(t_map map)
{
	put_ground_to_window(map);
	put_wall_to_window(map);
	put_collectible_to_window(map);
	put_character_to_window(map);
	put_exit_to_window(map);
}