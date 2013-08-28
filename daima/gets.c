#include <stdio.h>

#define N 1024

int main(int argc,const char*argv[])
{
	char str[N];

	printf("Please enter<hello world>:");
	gets(str);
	printf("%s\n",str);

	return 0;
}

