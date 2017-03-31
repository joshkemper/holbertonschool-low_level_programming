#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
#endif
