#include <stdio.h>

#define N 10

int main(int argc, const char *argv[])
{
	int a[N],*p;

	printf("enter %d number:", N);
	for(p = a; p < a + N; p++)
		scanf("%d", p);

	printf("ln reverse order:");
	for(p = a + N - 1; p >= a; p--)
		printf(" %d", *p);

		printf("\n");

		return 0;
}
