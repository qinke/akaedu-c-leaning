#include <stdio.h>

extern int myabs(int num);

int main(int argc, const char *argv[])
{
	int a = 10;
	int b = -5;

	printf("%d abs is %d\n", a, myabs(a));
	printf("%d abs is %d\n", b, myabs(b));

	return 0;
}

int myabs(int x)
{
	if (x >= 0)
		return x;
		else
			return -x;
}
