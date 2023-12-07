#include <stdio.h>
#include <unistd.h>

void main(void)
{
	pid_t pid = getpid();
	while(1)
	{
		printf("PID = %u\n", pid);
		sleep(1);
	}
}
