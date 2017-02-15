#include "holberton.h"
#include <stdio.h>
/**
 * times_table - times tanble to 9
 *
 * Description - times tabble to 9
 *
 *
 * return: void
 */
void times_table(void)
{
	int i;
	int j;

	_putchar (' ');
	_putchar (' ');
	for (i = 0; i < 10; ++i)
	{

		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');

	}
	for (i = 1; i < 64; ++i)
		_putchar(' ');
	_putchar('\n');

	for (i = 1; i < 10; ++i)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; ++j)
			printf("%3d,", i * j);
		printf("\n");
	}

}
