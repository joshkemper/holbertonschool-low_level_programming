#include "holberton.h"
#include <stdio.h>
/**
 * fizzbuzz - Short description
 *
 * Description: print all number to one hundred
 *
 * Return: 0
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
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - short description
 * Description: print all numbers to hundred
 *
 * Return: success
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
