#include <stdio.h>

int get_max(int a, int b, int c)
{
	if(a < b)
		a = b;
		if(a > c)
			return a;
			else
				return c;
}

int main(int argc, const char* argv[])
{
	int a, b, c;

	printf("enter the age of three people: ");
	scanf("%d %d %d", &a, &b,&c);
	printf("the max is %d\n", get_max(a, b, c));

	return 0;
}

