#include "holberton.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer, 00:00 to 23:59
*
*
* Description -prints every minute of the day of Jack Bauer,00:00 to 23:59
*
* Return: void function
*/
void jack_bauer(void)
{
	int a = 0; int b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
