#include "main.h"

char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char *token;
	while(environ[i])
	{
		token = strtok(environ[i], "=");
		if(!strcmp(token, name))
			return strtok(0, "=");
		i++;
	}
	return 0;
}
int _strcmp(char *s1, const char *s2)
{
	int size = 0;
	int i;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
	size += (s1[i] - s2[i]);
	if ((s1[i] - s2[i]) != 0)
	{
	break;
	}
	i++;
	}
	return (size);
}
