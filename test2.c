#include "./get_next_line/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int fd;
    char *buffer;

    fd = open(av[1], O_RDONLY, 0);
    buffer = get_next_line(fd);
    while (buffer)
    {
        printf("%s", buffer);
        buffer = get_next_line(fd);
    }
    return(0);
}