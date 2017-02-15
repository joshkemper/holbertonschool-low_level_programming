#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 */
void times_table(void)
{
	int i;
	int j;

	putchar (' ');
	putchar (' ');
	for (i = 0; i < 10; ++i)
	{

		putchar('0');
		putchar(',');
		putchar(' ');
		putchar(' ');

	}
	for (i = 1; i < 64; ++i)
		putchar(' ');
	putchar('\n');

	for (i = 1; i < 10; ++i)
	{
		putchar(' ');
		putchar(' ');
		putchar('0');
		putchar(',');

		for (j = 1; j < 10; ++j)
			printf ("%3d,", i * j);
		printf ("\n");
	}
	return 0;


}
