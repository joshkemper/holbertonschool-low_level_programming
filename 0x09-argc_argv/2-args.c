#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of args to main
 * @argv: list od args to main
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else if (argc > 1)
	{
		for (i = 0; i <= argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
