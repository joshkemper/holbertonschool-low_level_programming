#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Description: function that prints the chessboard.
 * Return: a[i][j])i
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
