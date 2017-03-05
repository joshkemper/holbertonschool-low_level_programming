#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of args for c
 * @argv: list of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int product = 1;
	int i;

	if (argc <= 2)
	{
		printf("Error\n");
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
