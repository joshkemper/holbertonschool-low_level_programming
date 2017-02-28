#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - finds first occurrence ofn substring needlestring haystack
 * @haystack: first string to check for pattern
 * @needle: second string to check against haystrack
 * Description: first occurrence ofn substring needlestring haystack
 * Return: p1start or 0
 */
char *_strstr(char *haystack, char *needle)
{
  int i;
  int j;
  int k;

  for (i = 0; haystack[i] != '\0'; i++)
    {
      for (k = i, j = 0; needle[j] != '\0'; k++ , j++)
	{
	  if (haystack[k] != needle[j] || haystack[k] == '\0')
	    {
	      break;
	    }
	}
      if (needle[j] == '\0')
	    {
	      return (haystack + i);
	    }
	}
      return ('\0');
}
