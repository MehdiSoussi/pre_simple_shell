#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>

void main(void)
{
	int c;
	printf("Enter the PID of the process that you want to kill\n");
	scanf("%d", &c);
	
	int r = kill(c, SIGKILL);
	if(r == -1)
		perror("SIGKILL FAILED\n");
}
