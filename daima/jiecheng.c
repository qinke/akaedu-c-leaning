#include <stdio.h>

int main(int argc, const char *argv[])
{
	int result = 1;
	int i = 1,n;

	printf("Please input a number:");
	scanf("%d",&n);

	do {
		result = result * i;
		i = i + 1;
	}while(i <= n);

	printf("n! = %d\n",result);

	return 0;
}
