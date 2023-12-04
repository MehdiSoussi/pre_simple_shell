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
	(void)argc;
	int i=0, c=0;

	printf("execve_called starting\n");
	printf("the pid of the execve_called: %u\n", getpid());
	printf("the ppid of the execve_called: %u\n", getppid());
	printf("the number of arguments is %d\n", argc);

	while(argv[i])
	{
		printf("Argument #%d: %s \n", i, argv[i]);
		i++;
	}
	
	printf("Now we are going to print the environment variable\n");
	        while(env[c])
			        {
	        printf("Argument #%d: %s \n", c, env[c]);
		c++;
									        }
	printf("the number of arguments is %d\n", c);
	printf("execve_called finishing\n");

    return (0);
}
