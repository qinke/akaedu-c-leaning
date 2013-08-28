#include <stdio.h>

int calc(int x)
{
	int count = 0;

	while(x)
	{
		if(x & 0x01)
			count++;
			x >>= 1;
	} 

	return count;
}

int main(int argc, const char *argv[])
{
	int x;

	printf("input an integer: ");
	scanf("%d",&x);
	printf("%d one exists in %d\n", calc(x), x);

	return 0;
}
