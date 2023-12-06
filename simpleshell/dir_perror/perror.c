#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("We are going to test the perror function\n");
	printf("We are testing with the function 'getcwd' with a faulty call that will set errno and we will display it using the errno value \n");

	char *buffer;
	size_t buffer_size = 2;
	char *r = getcwd(buffer, buffer_size);

	if(r != 0)
	{
		printf("Succus\n");
		return (0);
	}
	else
	{
		perror("Custom message denoting only an error without the value of errno");
		return (3);
	}

}
