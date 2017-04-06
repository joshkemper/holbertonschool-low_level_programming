#include <stdio.h>
#include <stdlib.h>

/**
 * main - creates command promt and prints arumnets passed
 * @ac: argument count
 * @av: argument vector
 * Return: 0 for success
 */

int main(int ac, char **av)
{
	char *buf;
	size_t bufsize = 32;
	size_t characters;

	buf = malloc(sizeof(char) * bufsize);
	if ( buf == NULL)
	{
		exit(1);
	}
	printf("$ ");
	characters = getline(&buf, &bufsize, stdin);
	printf("%s", buf);
	return (0);
}
