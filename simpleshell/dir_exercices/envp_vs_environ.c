#include <stdio.h>

void main(int argc, char **argv, char **envp)
{
	extern char **environ;

	printf("Addres of the variable environ: %p\n", &environ[0]);
	printf("Addres of the argument envp: %p\n", &envp[0]);

}
