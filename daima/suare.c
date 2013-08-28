#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i,n;

	printf("this program print a table of square \n");
	printf("Enter number of entries in table:");
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i*i);
	}

	return 0;
}
