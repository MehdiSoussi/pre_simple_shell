#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void main(void)
{
	int i = 0;
	pid_t x;
	char *argv[] = {"dakchi", 0};

	for(i=0; i<5; i++)
	{
	x = fork();
	if(x == 0)
	{
		printf("This is listing /tmp:\n");
		printf("PID: %u\n", getpid());
		printf("PPID: %u\n", getppid());
		execve("./fork_wait_execve.sh", argv, 0);
	}
	else{
		wait(0);	
	}
	}	
}
