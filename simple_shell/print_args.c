#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char args;
	int i;

	for ( i = 0; av[i] != NULL; i++)
	{
		printf("av[%d] = %s\n", i, av[i]);
	}
}
