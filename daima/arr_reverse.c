#include <stdio.h>

#define N 10

int main(int argc, const char *argv[])
{
	int a[N], i;

	printf("enter %d number:", N);
	for(i = 0; i < N; i++)
		scanf("%d",&a[i]);
		printf("in resverse order:");
		for(i = N-1; i >= 0; i--)
			printf("%d ", a[i]);
			printf("\n");

			return 0;
}
