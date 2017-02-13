#include <stdio.h>
/**
 *
 *
 *
 */
int main (void)
{
	int i;
	int u;

	for (i = '0'; i <= '9'; i++)
	{
		for (u = i +1; u <= '9'; u++)
		{
			putchar(i);
			putchar(u);
			if (i != '8' || u != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
