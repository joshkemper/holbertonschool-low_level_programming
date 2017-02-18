#include <stdio.h>
/**
 * main - entry point
 *
 * Description: finds largest prime factor of 612852475143
 *
 * Return: Void
 */
int main(void)
{
	long number = 612852475143;
	long div = 2, maxFact;

	while (number != 0)
	{
		if (number % div != 0)
			div = div + 1;
		else
		{
			maxFact  = number;
			number = number / div;

			if (number == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
