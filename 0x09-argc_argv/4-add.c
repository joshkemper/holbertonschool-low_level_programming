#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry
 * @argc: number of main args
 * @argv: list of main args
 * Return: sum
 */
int main (int argc, char* argv[])
{
	int sum = 0;
	int i;
	unsigned int j = 0;
	int p;
	char *k;

	if(argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];
			p = 0;

			for (j = 0; j <= strlen(argv[i]) - 1; j++)
			{
				if (k[j] < '0' || k[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				else
					p = 1;
			}
			if (p == 1)
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (sum);
}
