#include "holberton.h"
/**
 * _strstr - finds first occurrence ofn substring needlestring haystack
 * @haystack: first string to check for pattern
 * @needle: second string to check against haystrack
 * Description: first occurrence ofn substring needlestring haystack
 * Return: p1start or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *p2;

	if (!*needle) return haystack;
	char *p1 = (char*)haystack;
	while (*p1)
	{
		char *p1Begin = p1;
		p2 = (char *)needle;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return p1Begin;
			p1 = p1Begin + 1;
		}
	}
	return ('\0');
}
