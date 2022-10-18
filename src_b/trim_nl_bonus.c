/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_nl_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:39:06 by rhong             #+#    #+#             */
/*   Updated: 2022/10/18 17:50:31 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
