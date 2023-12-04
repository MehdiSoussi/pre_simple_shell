#include <stdio.h>

void main(void)
{
	extern char **environ;
	int i;
	while(environ[i])
	{
	printf("%s\n", environ[i]);
	i++;
	}

}
