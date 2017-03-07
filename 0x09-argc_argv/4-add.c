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
	int i;
	int j;
	int len;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = 0; j < len; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (sum);
	}
	return (0);
}
