#include <stdio.h>

int main(int argc, const char *argv[])
{
	int digits = 0,n;

	printf("enter a nonnegative integer:");
	scanf("%d",&n);

	do {
		n /= 10;
		digits++;
	}while(n>0);

	printf("the number has %d digits\n",digits);

	return 0;
}
