#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - find operand from argument list matches it with its function
 * @s: pointer to opperand , argv[3], +, _ * ? or %
 * @a: integer to be opperated on , argv[2]
 * @b: integer to be opperated on , argv[4]
 * Return: name of function to perform mathematical operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
