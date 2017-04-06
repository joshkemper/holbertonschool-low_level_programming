#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
#define BUFFSIZE 1204
#include <stdio.h>

/**
 * main - copies contents of file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success: 97, 98, 99, or 100 on failure
 */

int main(int argc, char *argv[])
{
	char buf[BUFFSIZE];
	int fd_from, fd_to, fdread, fdwrite, fdclose, fdclose1;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file fd_from%s\n", argv[1]),
			exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	fdread = read(fd_from, buf, BUFFSIZE);
	if (fdread == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (fdread > 0)
	{
		fdwrite = write(fd_to, buf, fdread);
		if (fdwrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		fdread = read(fd_from, buf, BUFFSIZE);
		if (fdread == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	fdclose = close(fd_from);
	if (fdclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	}
	fdclose1 = close(fd_to);
	if (fdclose1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (fd_to);
}
