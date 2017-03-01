#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers. 
 * @a: pointer array of ints
 * @size: size of array
 * Description: prints the sum of the two diagonals of a square matrix of integers
 * Return: void
 */
void print_diagsums(int *a, int size)
{
  int i;
  int diagonal_sum_1 = 0;
  int diagonal_sum_2 = 0;

  for (i = 0; i < (size * size); i += (size + 1))
    {
      diagonal_sum_1 += a[i];
    }
  for (i = (size - 1); i < ((size * size) - 1); i += (size - 1))
    {
      diagonal_sum_2 += a[i];
    }
  printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
