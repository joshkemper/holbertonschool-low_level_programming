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
			if (i != 57 || u != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
