#include <stdio.h>

int main(void)
{
	int pid;
	int ppid;

	pid = getpid();
	ppid = getppid();
	printf("%u\n", pid);
	printf("%u\n", ppid);
}
