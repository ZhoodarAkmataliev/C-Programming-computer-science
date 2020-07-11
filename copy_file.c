#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#define BUFF_SIZE 64

int		main(int argc, char **argv)
{
	int fd;
	int fd2;
	ssize_t ret;
	ssize_t written_bytes;
	char buff[BUFF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	while ((ret = read(fd, &buff, BUFF_SIZE)) > 0)
	{
		written_bytes = write(fd2, &buff, ret);
	}
	close(fd);
	close(fd2);
	return (0);
}
