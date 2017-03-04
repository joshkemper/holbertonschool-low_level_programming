#include "holberton.h"
#include <stdio.h>
/**
 * main - print name of program
 *
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
