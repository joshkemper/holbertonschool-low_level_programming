#include "holberton.h"
#include <stdio.h>
/**
 * Main - entry point
 *
 * Return: 0 success
 */
int main (int argc, char* argv[])
{
	int i;

	if(argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
