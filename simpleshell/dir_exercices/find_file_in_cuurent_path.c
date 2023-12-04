#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
	int i;
	char *construct_path = malloc(sizeof(char)*64);
	struct stat statistics;
	int r;

	for (i=1; i<argc; i++)
	{
	construct_path = _strcat(construct_path, argv[i]);
	r = stat(construct_path, &statistics);
	if(r == 0)
	printf("file: %s is found\n", argv[i]);
	else
	printf("file: %s is not found\n", argv[i]);
	}
	

	return 0;
}
/**
 *  * _strcat - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 1
 *     *
 *      * Description: [P217T0]
 *       *
 *        * Return: Return value
 **/
char *_strcat(char *dest, char *src)
{
	int dest_size = _strlen(dest);
	int i = 0;

	while (*src != '\0')
	{
		*(dest + dest_size + i) = *src;
		i++;
		src++;
	}
	*(dest + dest_size + i) = *src;
	return (dest);
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P216T1]
 *      *
 *       * Return: Return value
 **/
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
