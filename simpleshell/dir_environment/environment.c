#include <stdio.h>
#include <stdlib.h>

void main (int argc, char **argv, char **envp)
{
	(void) argc;
	(void) argv;
	int i=0;

	while(envp[i])
	{
		printf("%s\n", envp[i]);
		i++;
	}
}	
