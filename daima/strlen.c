#include <stdio.h>
#include <string.h>

#define N 32

int main(int argc, const char *argv[])
{
	char str[] = "hello world";
	char arr[N] = "hello akaedu";

	printf("strlen(str) = %d\n", strlen(str));
	printf("sizeof(str) = %d\n", sizeof(str));

	printf("strlen(arr) = %d\n", strlen(arr));
	printf("sizeof(arr) = %d\n", sizeof(arr));

	return 0;
}

