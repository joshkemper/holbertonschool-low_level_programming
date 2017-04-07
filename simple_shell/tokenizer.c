#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - program to print command prompt, and tokenize args to function
 * @ac: argument count
 * @av: argument list
 * Return: 0 for succes
 */

int main(int ac, char **av)
{
	char buf[] = "abcd efg hijk lmno";
	int i = 0;
	char *p = strtok(buf, " ");
	char *array[3];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, " ");
	}

	for (i = 0; i < 4; ++i)
	{
		printf("%s\n", array[i]);
	}
	return (0);
}
