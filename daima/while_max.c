#include <stdio.h>
#define N 10

int main(int argc, const char *argv[])
{
	int num[N] = {12, 6, 34, 65, 67, 87, 100, 1, 66};
	int i = 0, max = 0;

    while(i++ < N)
	{
		if(max < num[i])
			max = num[i];
	}
	printf("max is %d\n", max);

	return 0;
}
