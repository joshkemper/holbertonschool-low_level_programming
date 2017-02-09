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

	for (i = '0'; i <= '9'; i++)
		for (u = '0'; u <= '9'; u++)
		{
			putchar (i);
			putchar (u);
			putchar (',');
			putchar (' ');
		}
	return (0);
}
