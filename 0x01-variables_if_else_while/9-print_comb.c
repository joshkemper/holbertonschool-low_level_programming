#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i >= '0' && i <= '8')
		{
			putchar (i);
			putchar (',');
			putchar (' ');
		}
		else
			putchar (i);
	}
	return (0);
}
