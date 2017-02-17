#include "holberton.h"
/**
 * more_numbers - prints 1 through 14 and newline
 *
(* a blank line
*
(*
* Return: Void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0 ; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
