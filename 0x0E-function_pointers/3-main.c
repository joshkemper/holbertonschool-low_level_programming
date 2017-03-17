#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count for main
 * @argv: argument vecor, list of arguments
 * Return: 0 succesful
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);
	return (0);
}
