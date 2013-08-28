#include <stdio.h>

int main(int argc, const char *argv[])
{
	char *p = "012345";

	printf("sizeof(p) = %d, strlen(p) = %d\n", sizeof(p), strlen(p));

	printf("sizeof(char *) = %d\n", sizeof(char *));
	printf("sizeof(short *) = %d\n", sizeof(short *));
	printf("sizeof(int *) = %d\n", sizeof(int *));

	return 0;
}



