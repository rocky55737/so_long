#include <mlx.h>
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	void	*mlx;
	void	*mlx_win;
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
			mlx_put_image_to_window(mlx, mlx_win, img, i * 50, j * 50);
	}

	mlx_loop(mlx);
	return (0);
}
