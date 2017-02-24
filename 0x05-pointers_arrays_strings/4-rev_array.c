#include "holberton.h"
/**
 *
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int c;
	int t;
	int end = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		t = a[c];
		a[c] = a[end];
		a[end] = t;
		end--;
 	}
}
