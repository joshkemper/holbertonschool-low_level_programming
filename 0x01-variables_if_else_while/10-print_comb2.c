#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int u;

	for (i = 48; i <= 57; i++)
	{
		for (u = 48; u <= 57; u++)
		{
			putchar(i);
			putchar(u);
			if (u == 57 && i == 57)
			{
				putchar('\n');
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
