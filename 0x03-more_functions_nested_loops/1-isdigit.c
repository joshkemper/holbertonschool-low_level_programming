#include "holberton.h"
/**
 * _isdigit - entry point
 * @c: varibale to check if between 0-9
 * Description - checks for uppercase character
 *
 * Return: variable to check if between 0 or 9
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
