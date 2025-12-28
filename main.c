#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
	int fd = open("test.txt", O_RDONLY);
    char *line;

    line = get_next_line(fd);
    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }
    printf("\n");
    free(line);
	close(fd);
}