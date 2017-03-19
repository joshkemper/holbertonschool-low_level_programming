#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct op - points to list of arguments in op_t struct
 * @op: operator points to column o of opt_t struct
 * @f: points to functions in coumn 1 of op_t struct
 *
 */
typedef struct op
{
	char *op;
	void (*f)();
} op_t;

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void _putchar(char);
#endif
