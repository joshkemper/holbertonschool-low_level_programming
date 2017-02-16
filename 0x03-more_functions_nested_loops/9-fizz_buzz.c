#include "holberton.h"
#include <stdio.h>
/**
 * main - Short description
 * Description: print all number to one hundred
 *
 * Return: 0 for success
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
int main(void)
{
	fizzbuzz();
	return (0);
}
