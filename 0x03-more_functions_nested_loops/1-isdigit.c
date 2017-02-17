#include "holberton.h"
/**
 * Main - entry point
 * @c: varibale to check if between 0-9
 * Description - checks for uppercase character
 *
 * Return: variable to check if between 0 or 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
