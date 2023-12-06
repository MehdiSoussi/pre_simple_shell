#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main (int argc, char **argv, char **envp)
{
	printf("This is what we are going to do\n");
	printf("The first argument read by the program is the fd that we are going to check wether it is related to the terminal\n");
	printf("The fd that we are going to check is %s\n", argv[1]);
	printf("We are then going to check wether it exist in the fd list of both the parent (terminal) and the child (the running program)\n");
	printf("The way we are going to check is via listing the /proc/PID/fd\n");

	pid_t pid = getpid();
	pid_t ppid = getppid();

	printf("Current PID: %d\n", pid);
	printf("Current PPID: %d\n", ppid);


	int x = fork();
	if(x == 0)
	{
	sleep(2);
	char res[100];
	char int_to_string[10];
	strcat(res, "/proc/");
	sprintf(int_to_string, "%d", ppid);
	strcat(res, int_to_string);
	strcat(res, "/fd");
	char *argv_execve[] = {"/bin/ls", res, NULL};
	execve("/bin/ls", argv_execve, envp);
	}
	
	else
	{
	printf("\n-----------------------\n");
	printf("Checking the status of the fd '%s' via asatty\n", argv[1]);
	int fd_status = isatty(atoi(argv[1]));
	if(fd_status)
		printf("fd %s connected\n", argv[1]);
	else
		printf("fd %s disconnected\n", argv[1]);
	}
}
