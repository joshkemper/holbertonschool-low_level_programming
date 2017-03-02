#include "holberton.h"
/**
 * prime - detcts prime numbers
 * @i: integer to test if prime
 * @n: interger arument passed to function
 * Return: prime number if detected
 */
int prime(int i, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
	{
		return (prime(i + 1, n));
	}

}
/**
 * is_prime_number - function returns 1 input integer is prime, otherwise 0
 * @n: integer
 * Return: 1 if prime , 0 if negative
 *
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime(i, n));
	}
}
