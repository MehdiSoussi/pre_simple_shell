#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void main (int argc, char **argv, char** envp)
{
	size_t buffer_size = 1024;
	char *buffer = malloc(sizeof(char)* buffer_size);
	char *current_directory;
	char *rb = getcwd(buffer, buffer_size); 
	const char *name = "PWD";
	char *value;

	if(rb == 0)
		exit(1);
	printf("The current directory now is [%s]\n\n\n", buffer );
	printf("now we are be going to this path of the directory that we want to change to: [%s]\n\n\n", argv[1]);
	
	int r = chdir(argv[1]);
	if(r == 0)
		printf("Succufully changed directory to [%s]\n\n\n", argv[1]);
	else
		printf("Unsuccufully changed directory to [%s]\n\n\n", argv[1]);

	rb = getcwd(buffer, buffer_size);
	if(rb == 0)
                exit(1);
	printf("The current directory now is [%s]\n\n\n", buffer);
	printf("Here I want to know wether the environment variable of PWD changed or not?\n\n\n");

	value = getenv(name);
	printf("Here I tested using the 'getenv' variable that reads the environment variable PWD\n, whether the global variable 'environ' or the inherented environment envp and the result is : %s\nLooks like 'getenv' do nor read the local environment of the process running, but that of the shell?\n\n\n", value);

	printf("Now another test, we are going to print the envp envirnment inherented from main but maybe changed after chdir?\n\n\n");
	int i = 0;
	while (envp[i])
	{
		printf("%s\n", envp[i]);
		i++;
	}

	printf("\n\n\nWhat variable what actually changed??")
}
