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