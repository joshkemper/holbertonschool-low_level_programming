#include "holberton.h"
#include <stdio.h>
/**
 * main - print name of program
 * @argc: count of maint arguments
 * @argv: list of arguments
 * Return: 0 success
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
