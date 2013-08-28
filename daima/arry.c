#include <stdio.h>

#define N 10

int arr_add(int num[], int len)
{
   int i, sum = 0;

   for(i = 0; i < len; i++)
   {
	   sum += num[i];
   }

   return sum;
}

int arr_sub(int num[], int len)
{
	int i, sub = num[0];

	for(i = 1; i < len; i++)
		sub -= num[i];

		return sub;
}

int main(int argc, const char *argv[])
{
	int a[N] = {0}, i = 0;
	int sum, sub;

	for(i = 0; i < N; i++)
	{
		a[i] = i+ 10;
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("reverse output:\n");
	for(i = N -1; i >= 0; i--)
		printf("a[%d] = %d\n", i, a[i]);
	sum = arr_add(a, N);
	sub = arr_sub(a, N);

	printf("arr sum: %d, arr sub: %d\n", sum, sub);

	return 0;
}
