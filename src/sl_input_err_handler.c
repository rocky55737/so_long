/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_input_err_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:53:58 by rhong             #+#    #+#             */
/*   Updated: 2022/10/11 17:55:26 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void		sl_input_err_handler(int ac);
static int	sl_input_err(int ac);

void	sl_input_err_handler(int ac)
{
	char	*input_err_msg;

	if (sl_input_err(ac))
	{
		write_err("so_long: not 2 argument\n");
		exit(1);
	}
}

static int	sl_input_err(int ac)
{
	if (ac != 2)
		return (1);
	return (0);
}
