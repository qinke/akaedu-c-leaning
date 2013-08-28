#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

#if 0

	int i;

	printf("argc = %d\n",argc);

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
#endif

#if 1
	int i, num;
	if(argc < 2) {
		printf("./a.out num\n");
		exit(-1);
	}

	num = atoi(argv[1]);

	for(i = 0; i < num; i++)
		printf("hello world\n");
	printf("argv[2] = %s\n", argv[2]);
#endif

#if 0
	int a = NULL;
	a = 5;

	printf("%d\n",a);
#endif

	return 0;
}
