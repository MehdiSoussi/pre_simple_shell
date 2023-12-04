#include "main.h"

void main(void)
{
	printf("%s\n", _getenv("PATH"));
	char *token = strtok(path, ":");
	while(token)
	{
		printf("%s\n", token);
		token = strtok(0, ":");
	}

}
