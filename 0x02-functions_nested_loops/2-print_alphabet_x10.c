#include "holberton.h"
/**
 * void print_alphabet_x10 - print alphbet 10 times
 *
 *
 * Description: print alphbet 10 times
 *
 * Return: No return void function
 */
void print_alphabet_x10(void)
{
	int i;
	int u;

	for (u = 0; u <= 9; u++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
