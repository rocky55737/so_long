#include "so_long.h"

void	malloc_null_guard(void *ptr)
{
	if (ptr == 0)
	{
		perror("null guard: ");
		exit(1);
	}
}