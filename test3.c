#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int fd;
	char a[10];

	for (int c = 0; c < 10; c++)
		a[c] = 0;
	fd = open(av[1], O_RDONLY, 0);
	printf("%zd\n", read(fd, a, 9));
	printf("%zd\n", read(fd, a, 9));

}