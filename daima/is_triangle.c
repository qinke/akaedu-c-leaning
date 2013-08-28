#include <stdio.h>

int is_triangle(int a, int b, int c)
{
	if((a <= 0) || (b <= 0) || (c <= 0))
	{
		printf("Usage: a: %d, b: %d, c: %d\n", a, b, c);
		return -1;
	}

	if(((a + b) > c) && ((b + c) > a) && ((a + c) > b))
	{
		return 1;
	}

	else
		return 0;
}

int main(int argc, const char *argv[])
{
	int a, b, c;
	int result;

	printf("please input 3 number as triangle:");
	scanf("%d %d %d", &a, &b,&c);

	result = is_triangle(a, b, c);
	if(result == 1)
	{
		printf("a = %d, b = %d, c = %d can found a triangle!\n", a, b, c);
	}
	else if(result == 0)
	{
		printf("a = %d, b = %d, c = %d can not found a triangle!\n", a, b, c);
	}
	else
		printf("invariable input!\n");

	return 0;
}
