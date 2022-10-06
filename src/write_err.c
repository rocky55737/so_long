#include "so_long.h"

void	write_err(char	*err_msg)
{
	write(2, err_msg, ft_strlen(err_msg));
}