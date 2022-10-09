#include "so_long.h"

void	update_window();

void	update_window()
{
	update_character_pose(map);
	put_map_to_window(map);
	
}