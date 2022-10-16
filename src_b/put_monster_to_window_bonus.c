void	put_monster_to_window(t_game_data *g_d, int x, int y)
{
	mlx_put_image_to_window(g_d->mlx, g_d->win, g_d->imgs[4].img_ptr, x * 50, y * 50);
}