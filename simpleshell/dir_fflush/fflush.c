#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(void)
{
	fprintf(stdout, "This text is set at the start of the program, so it should be executed just after executing the process\n");
	sleep(5);
	fprintf(stdout, "This text is set to be executed after 5s\n");

}

