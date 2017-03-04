#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Main - entry point
 *
 * Return: 0 for success
 */
int main (int argc, char* argv[])
{
	int product = 1;
	int i;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
	}
	printf("%d\n", product);
	return (0);
}
