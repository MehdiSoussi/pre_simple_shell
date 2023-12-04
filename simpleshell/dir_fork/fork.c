#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t x;
	int test = 5;

	printf("will this be executed twice? Answer: No\n");
	/* on 1st execution x is set to a new PID, the PID of the new process that is forked*/
	/* on 2nd execution x is set to 0*/
	x = fork();
	printf("This will absolutely be executed twice, right?\n");
	printf("This is x, that is the result of fork: %d \n", x);
	printf("Does for remember variables?: test = %d\n", test);
	test++;
	if(x == -1)
		printf("fork failed\n");
	if(x == 0)
		printf("Child is being executed and its PID is %u and its PPID is %u\n", getpid(), getppid());
	if(x != 0 && x != -1)
		printf("Parent is being executed and its PID is %u and its PPID is %u\n", getpid(), getppid());
	return (0);
}
