#include <stdio.h>

#define N 10

int find_max(int a[], int len)
{
	int max, i;
	max = a[0];

	for(i = 1; i < len; i++)
		{
			if (a[i] > max)
				max = a[i];
		}

		return max;
}

int main(int argc, const char *argv[])
{
	int num[N] = {23, 21, 56, 43, 78, 26, 98, 13, 44, 6};

	printf("max num is: %d\n",find_max(num, N));

	return 0;
}
