#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int fdread, fdwrite, fdclose;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (-1);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, buf, letters);
	if (fdread == -1)
		return (0);
	fdwrite = write(STDOUT_FILENO, buf, letters);
	if (fdwrite == -1)
		return (0);
	fdclose = close(fd);
	if (fdclose == -1)
		return (0);
	free(buf);
	return (fdread);
}
