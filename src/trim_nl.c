/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_nl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:39:06 by rhong             #+#    #+#             */
/*   Updated: 2022/10/17 17:40:00 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*trim_nl(char *str)
{
	char	*ret;

	ret = str;
	if (!str)
		return (0);
	if (str[ft_strlen(str) - 1] == '\n')
	{
		ret = ft_substr(str, 0, ft_strlen(str) - 1);
		free(str);
		return (ret);
	}
	return (ret);
}
