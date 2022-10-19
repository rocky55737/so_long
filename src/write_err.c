/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:30:14 by rhong             #+#    #+#             */
/*   Updated: 2022/10/19 21:12:19 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	write_err(char	*err_msg)
{
	write(2, "Error\n", ft_strlen("Error\n"));
	write(2, err_msg, ft_strlen(err_msg));
}
