#include <stdio.h>
/**
 * Main - entry point
 * @argc: count of arguments to main
 * @argv: list of arguments to main
 * Return: 0 for success
 */
int main (int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
