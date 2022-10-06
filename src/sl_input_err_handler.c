#include "so_long.h"

void		sl_input_err_handler(int ac);
static int	sl_input_err(int ac);

void	sl_input_err_handler(int ac)
{
	char	*input_err_msg;

	if (sl_input_err(ac))
	{
		input_err_msg = ft_strdup("so_long: not 2 argument\n");
		write(2, input_err_msg, ft_strlen(input_err_msg));
		free (input_err_msg);
		exit(1);
	}
}

static int	sl_input_err(int ac)
{
	if (ac != 2)
		return (1);
	return (0);
}