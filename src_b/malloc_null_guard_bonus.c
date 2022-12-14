/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_null_guard_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:53:30 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:48:12 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	malloc_null_guard(void *ptr)
{
	if (ptr == 0)
	{
		perror("null guard: ");
		exit(1);
	}
}
