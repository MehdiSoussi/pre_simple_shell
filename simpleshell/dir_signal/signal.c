#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>

void handle_signal(int d);
void main (void)
{
	signal(SIGINT,handle_signal);
	
	int x = fork();
	if(x == 0)
		while(1)
		{
			printf("CURRENT PID: %d\n", getpid());
			sleep(1);
		}
	else
	{
		wait(0);
	}
}
void handle_signal(int d)
{
	printf("whatever;");
}

