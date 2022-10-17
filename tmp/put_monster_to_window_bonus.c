void	put_monster_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[4].img_ptr, x * 50, y * 50);
}

void	put_player_to_window(t_game_data *g_d, int x, int y, int keycode)
{
	if (keycode == 65)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[4].img_ptr, x * 50, y * 50);
	else if (keycode == 68)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[6].img_ptr, x * 50, y * 50);
	else if (keycode == 83)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[0].img_ptr, x * 50, y * 50);
	else if (keycode == 87)
		mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->p_imgs[2].img_ptr, x * 50, y * 50);
}

void	set_p_imgs(t_game_data *g_d)
{
	g_d->imgs[0].relative_path = "../assets/player/0.xpm";
	g_d->imgs[0].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[0].img_ptr, &(g_d->imgs[0].img_width), &(g_d->imgs[0].img_width));
	g_d->imgs[1].relative_path = "../assets/player/2.xpm";
	g_d->imgs[1].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[1].img_ptr, &(g_d->imgs[1].img_width), &(g_d->imgs[1].img_width));
	g_d->imgs[2].relative_path = "../assets/player/4.xpm";
	g_d->imgs[2].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[2].img_ptr, &(g_d->imgs[2].img_width), &(g_d->imgs[2].img_width));
	g_d->imgs[3].relative_path = "../assets/player/6.xpm";
	g_d->imgs[3].img_ptr = mlx_xpm_file_to_image(g_d->mlx, \
	g_d->imgs[3].img_ptr, &(g_d->imgs[3].img_width), &(g_d->imgs[3].img_width));
}