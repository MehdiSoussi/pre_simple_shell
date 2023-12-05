#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = "Geeks-for-Geeks";
 
    printf("original string: %s\n", str);
    // Returns first token
    char* token = strtok(str, "-");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }
    printf("after string: %s\n", str);
 
    return 0;
}
