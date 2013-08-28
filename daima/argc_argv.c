#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int num, i;

	if(argc < 2) {
		printf("./a.out num\n");
		exit(-1);
	}

	num = atoi(argv[1]);

	for(i = 0; i < num; i++)
		printf("hello world\n");
	printf("argv[2] = %s\n", argv[2]);

	return 0;
}
