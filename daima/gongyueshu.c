#include <stdio.h>

int gcd(int a, int b)
{
	int i;

	for(i = a < b ? a : b; i > 0; i--) {
		if(a % i == 0 && b % i == 0)
			return i;
	}
}

int main(int argc, const char *argv[])
{
	int i, j;

	printf("please enter two integer: ");
	scanf("%d %d", &i, &j);
	printf("the gcd of %d and %d is %d\n", i, j, gcd(i, j));

	return 0;
}
