#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments to main
 * @argv: list of arguments to main
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
