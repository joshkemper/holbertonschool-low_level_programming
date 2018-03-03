#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fd;
	char Buff[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fd = 1;
	write( fd, Buff, 60);
	return (1);
}
