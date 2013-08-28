#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n;

	while(1)
	{
		printf("enter a number(enter 0 to stop):");
		scanf("%d",&n);
		if(0 == n)
			break;
			printf("%d cubed is %d\n", n, n*n*n);
	}

   return 0;
}
