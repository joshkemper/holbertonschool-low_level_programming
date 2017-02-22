#include "holberton.h"
/**
 * puts2 - display every other character in string to output
 * @str: str variable holds a string
 * Description: displays every other character in string to output
 *
 * Return: void
 */
void puts2(char *str)
{
	int length, count;

	while (str[length] != '\0')
	{
		length++;
	}
	while (count < length)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
