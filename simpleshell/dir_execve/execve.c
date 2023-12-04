#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int argc, char **argv, char **env)
{
	(void) argc, argv, env;

	printf("excecve starting\n");
	printf("the pid of the execve: %u\n", getpid());
	printf("execve program started\n");
	char* argv_called[] = { "argv0", "argv1", NULL };
 	char* envp_called[] = { "env0", "env1", NULL };
 	if (execve("./execve_called", argv_called, envp_called) == -1)
  	{
	perror("Could not execve\n");
  	return 1;
	}
	printf("excecve after calling execve_called\n");
	printf("excecve finishing\n");
	return 0;
}
