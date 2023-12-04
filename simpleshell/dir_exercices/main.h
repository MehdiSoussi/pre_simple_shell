#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_getenv(const char *name);
int _strcmp(char *s1, const char *s2);
typedef struct dir
{
	char *directory;
	struct dir *next;
} dir;
size_t print_list(const dir *h);
dir *add_node(dir **head, const char *str);

#endif
