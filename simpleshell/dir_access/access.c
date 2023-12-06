#include <stdio.h>
#include <unistd.h>

void main(int argc, char **argv)
{
	printf("Using the [access()] function to test existence, read, write, execute rights\n");
	printf("PATH = [%s]\n", argv[1]);
	
	if(!access(argv[1], F_OK))
		printf("file in PATH [%s] [EXIST]\n", argv[1]);
	else
		printf("file in PATH [%s] [DOES NOT EXIST]\n", argv[1]);

	if(!access(argv[1], R_OK))
		printf("file in PATH [%s] [HAS READ RIGHTS]\n", argv[1]);
	else
		printf("file in PATH [%s] [DOES NOT HAVE READ RIGHTS]\n", argv[1]);
	if(!access(argv[1], W_OK))
		printf("file in PATH [%s] [HAS WRITE RIGHTS]\n", argv[1]);
	else
		printf("file in PATH [%s] [DOES NOT HAVE WRITE RIGHTS]\n", argv[1]);
	if(!access(argv[1], X_OK))
		printf("file in PATH [%s] [HAS EXECUTE RIGHTS]\n", argv[1]);
	else
		printf("file in PATH [%s] [DOES NOT HAVE EXECUTE RIGHTS]\n", argv[1]);



}
