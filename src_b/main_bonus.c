/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:24:05 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 20:04:05 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void leaks(void)
{
	system("leaks so_long");
}

int	main(int ac, char **av)
{
	atexit(leaks);
	so_long(ac, av);
	return (0);
}