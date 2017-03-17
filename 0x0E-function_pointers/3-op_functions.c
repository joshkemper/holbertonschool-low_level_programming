#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds integer b to a
 * @a: first integer
 * @b: second integer
 * Return: result of operation of function
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integer b from a
 * @a: first integer
 * @b: second integer
 * Return: result of operation of function
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of operation of function
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides integer a by integer b
 * @a: first integer
 * @b: second integer
 * Return: result of operation of function
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - returns remainder of devision of integer a by integer b
 * @a: integer a
 * @b: integer b
 * Result: result of operation of function
 */

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
