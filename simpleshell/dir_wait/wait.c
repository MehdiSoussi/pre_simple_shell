#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void main(void)
{
	int x = fork();

	if(x == 0)
		printf("Child running\n");
	else
	{
		wait(0);
		printf("introduced the call system wait() to wait until the at least on of the childs of this Parent process finishes then we execute the Parent\n");
		printf("Parent running\n");
	}

}
