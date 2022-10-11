#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	destroy_so_long(int keycode, void *arg[2])
{
	mlx_destroy_window(arg[0], arg[1]);
	return (0);
	//exit(1);
}

int	main(int ac, char **av)
{
	void	*mlx;
	void	*mlx_win;
	void	*arg[2];
	void	*img;
	char	*relative_path = "./sprites/Tilesets/Grass.xpm";
	int		img_width = 50;
	int		img_height = 50;


	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 2000, 1000, "test window");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 20; j++)
			mlx_put_image_to_window(mlx, mlx_win, img, i * 30, j * 30);
	}
	arg[0] = mlx;
	arg[1] = mlx_win;
	mlx_mouse_hook(mlx_win, destroy_so_long, arg);
	//red x button pressed
	mlx_hook(mlx_win, 17, 0, destroy_so_long, arg);
	mlx_loop(mlx);
	return (0);
}