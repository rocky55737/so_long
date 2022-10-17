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
	char	*relative_path = "./assets/etc/t.xpm";
	int		img_width = 50;
	int		img_height = 50;


	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 320, 320, "test window");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			mlx_put_image_to_window(mlx, mlx_win, img, i * 32, j * 32);
	}
	arg[0] = mlx;
	arg[1] = mlx_win;
	//red x button pressed
	mlx_hook(mlx_win, 17, 0, destroy_so_long, arg);
	mlx_loop(mlx);
	return (0);
}