#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main (int argc, char* argv[])
{
	int sum = 0;
	int i;

	if(argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) < 2147483647)
                        {
				sum += atoi(argv[i]);
                        }
			else if (atoi(argv[i]) >= 'a' && atoi(argv[i] <= 'z'))
			{
				printf("Error");
			}
		}
		printf("%d", sum);
	}
	return (0);
}
