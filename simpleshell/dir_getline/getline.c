#include <stdio.h>
#include <stdlib.h>

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
char *buffer = 0;
size_t buffer_size = 32;
ssize_t characters_read;

buffer = malloc(buffer_size * sizeof(char));

if(buffer == 0)
{
perror("Failed malloc");
exit(EXIT_FAILURE);
}

printf("$ ");
characters_read = getline(&buffer, &buffer_size, stdin);

if(characters_read == -1)
{
perror("Failed getline");
exit(EXIT_FAILURE);
}

printf("Numbers of character read: %zd\n",characters_read);
printf("Buffer size is: %zd\n", buffer_size);
printf("line read: %s\n", buffer);

}
