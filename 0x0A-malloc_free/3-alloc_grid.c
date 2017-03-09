#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2d arrayu
 * @height: height of 2d array
 * Return: **s pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	s = malloc(sizeof(s) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
