#include <stdio.h>
#include <stdlib.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	printf("the number of arguments is %d\n", argc);

	for (i=0; i<argc; i++)
	{
		printf("Argument #%d: %s \n", i, argv[i]);
	}


    return (0);
}
