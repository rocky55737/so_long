/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_input_err_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:53:58 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 17:13:32 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void		sl_input_err_handler(int ac, char **av);
static int	sl_input_count_err(int ac);
static int	sl_not_ber(char **av);

void	sl_input_err_handler(int ac, char **av)
{
	if (sl_input_count_err(ac))
	{
		write_err("so_long: not 2 argument\n");
		exit(1);
	}
	if (sl_not_ber(av))
	{
		write_err("so_long: map should be ber file\n");
		exit(1);
	}
}

static int	sl_input_count_err(int ac)
{
	if (ac != 2)
		return (1);
	return (0);
}

static int	sl_not_ber(char **av)
{
	if (ft_strcmp(&(av[1][ft_strlen(av[1]) - 4]), ".ber") == 0)
	{
		return (0);
	}
	return (1);
}
