#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<sys/wait.h>
void main(void)
{
	int x = fork();
	if(x == 0)
	{
		printf("This is a child\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		int status;
		wait(&status);
		printf("waiting the child to terminates\n");
		printf("The status of the child : %d\n", status );
		printf("This is a parent\n");
	}
	exit(15);
}
