#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void main(int argc, char **argv)
{
	int i;
	struct stat statistics;
	int r;

	for(i=0; i<argc; i++)
	{
		printf("\n --- Statistics for the PATH: [%s]\n\n", argv[i]);
		r = stat(argv[i], &statistics);
		if(r == -1)
			printf("File or directory in PATH [%s] is [NOT FOUND]\n", argv[i]);
		else
		{
		printf("File or directory in PATH [%s] is [FOUND]\n", argv[i]);
		
		/* There are other types of files, but I am just testing on Files or directories for the moment:*/
		if(S_ISREG(statistics.st_mode))
			printf("The PATH [%s] provided is a [FILE]\n", argv[i]);
		if(S_ISDIR(statistics.st_mode))
			printf("The PATH [%s] provided is a [DIRECTORY]\n", argv[i]);
		
		if (statistics.st_mode & R_OK)
			printf("the PATH [%s] provided has [READ] right\n", argv[i]);
		if (statistics.st_mode & W_OK)
			printf("the PATH [%s] provided has [WRITE] right\n", argv[i]);
		if (statistics.st_mode & X_OK)
			printf("the PATH [%s] provided has [EXECUTE] right\n", argv[i]);

		printf("the PATH [%s] provided has a size of [%ld]\n", argv[i], statistics.st_size);
		printf("---------------------------------------\n");
		}
	
	}
}
