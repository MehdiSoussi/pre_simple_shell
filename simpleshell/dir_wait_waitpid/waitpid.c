#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>


void main (void)
{
	int i=0;
	int status;
	char *argv[] = {".", 0};
	int x;	
	for(i=0; i<5; i++)
        {
        x = fork();
        if(x == 0)
        {
                printf("Child %d\n", i);
                execve("/bin/ls", argv, 0);
        }
        else{
		if(i == 2)
                waitpid(x, &status, 0);

		printf("Parent %d\n", i);
        }
        }

}
