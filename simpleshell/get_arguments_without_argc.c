#include <stdio.h>
#include <stdlib.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int argc, char **argv, char **env)
{
	(void)argc;
	int i=0, c=0;

	printf("the number of arguments is %d\n", argc);

	while(argv[i])
	{
		printf("Argument #%d: %s \n", i, argv[i]);
		i++;
	}
	
	printf("Now we are going to print the environment variable");
	        while(env[c])
			        {
	        printf("Argument #%d: %s \n", c, env[c]);
		c++;
									        }
	printf("the number of arguments is %d\n", c);


    return (0);
}
