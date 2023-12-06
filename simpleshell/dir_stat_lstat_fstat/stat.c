#include <stdio.h>
#include <sys/stat.h>

void main(void)
{
	char *path = "/bin/ls";
	struct stat statistics;
	int r;

	r = stat(path, &statistics);
	if(r == 0)
	{
		printf("file found\n");
		
	}	
	else
		printf("file not found\n");


		
}
